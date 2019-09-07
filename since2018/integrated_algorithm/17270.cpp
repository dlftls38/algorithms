#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 123456789
using namespace std;
vector<pair<int,int> >k[101];
int c[2][101]={0};
int v,m,j,s;
priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> > >pq;
void dijkstra(int who,int start){
	int i;
	for(i=1;i<=v;i++){
		c[who][i]=INF;
	}
	priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> > >pq;
	for(i=0;i<k[start].size();i++){
		pq.push(make_pair(k[start][i].second,k[start][i].first));
	}
	int cur_val=0;
	int cur_pos;
	while(1){
		int len=pq.size();
		if(len==0){
			break;
		}
		for(i=0;i<len;i++){
			if(c[who][pq.top().second]>pq.top().first){
				c[who][pq.top().second]=pq.top().first;
				cur_val=pq.top().first;
				cur_pos=pq.top().second;
				pq.pop();
				break;
			}
			pq.pop();
		}
		len=k[cur_pos].size();
		for(i=0;i<len;i++){
			if(c[who][k[cur_pos][i].first]>cur_val+k[cur_pos][i].second)
				pq.push(make_pair(cur_val+k[cur_pos][i].second,k[cur_pos][i].first));
		}
	}
}
int main(){
	scanf("%d%d",&v,&m);
	int i;
	for(i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		k[a].push_back(make_pair(b,c));
		k[b].push_back(make_pair(a,c));
	}
	scanf("%d%d",&j,&s);
	for(i=1;i<=v;i++){
		c[0][i]=INF;
		c[1][i]=INF;
	}
	for(i=1;i<=v;i++){
		for(int l=0;l<k[i].size();l++){
			if(k[i][l].first==j || k[i][l].first==s){
				k[i].erase(k[i].begin()+l);
			}
		}
	}
	dijkstra(0,j);
	dijkstra(1,s);
//	for(i=1;i<=v;i++){
//		printf("%d ",c[0][i]);
//	}
	priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int > >, greater<pair<pair<int,int>,int > > >ans;
	for(i=1;i<=v;i++){
		if(i!=j && i!=s && c[0][i]<=c[1][i] && c[0][i]!=INF && c[1][i]!=INF){
			ans.push(make_pair(make_pair(c[0][i]+c[1][i],c[0][i]),i));
		}
	}
	if(ans.size()==0)
		printf("-1");
	else
		printf("%d",ans.top().second);
}
