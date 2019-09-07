#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#define INF 70000000
using namespace std;
int v;
priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> > >pq;
vector<pair<int,int> > vv[801];
int cost[801]={0};
void dijkstra(int start){
	int i,j;
	for(i=0;i<v+1;i++){
		cost[i]=INF;
	}
	cost[start]=0;
	for(i=0;i<vv[start].size();i++){
		pq.push(make_pair(vv[start][i].second,vv[start][i].first));
	}
	int cur_val;
	int cur_pos;
	while(1){
		int len=pq.size();
		if(len==0){
			break;
		}
		for(i=0;i<len;i++){
			if(cost[pq.top().second]>pq.top().first){
				cost[pq.top().second]=pq.top().first;
				cur_val=pq.top().first;
				cur_pos=pq.top().second;
				pq.pop();
				break;
			}
			pq.pop();
		}
		len=vv[cur_pos].size();
		for(i=0;i<len;i++){
			if(cost[vv[cur_pos][i].first]>cur_val+vv[cur_pos][i].second){
				pq.push(make_pair(cur_val+vv[cur_pos][i].second,vv[cur_pos][i].first));
			}
		}
	}
}
int main(){
	int e;
	int i,j;
	scanf("%d%d",&v,&e);
	for(i=0;i<e;i++){
		int z,x,c;
		scanf("%d%d%d",&z,&x,&c);
		vv[z].push_back(make_pair(x,c));
		vv[x].push_back(make_pair(z,c));
		if(z==1){
			pq.push(make_pair(c,x));
		}
		if(x==1){
			pq.push(make_pair(c,z));
		}
	}
	int must1,must2;
	scanf("%d%d",&must1,&must2);
	dijkstra(1);
	int ans1=cost[must1];
	int ans2=cost[must2];
	dijkstra(v);
	ans1+=cost[must2];
	ans2+=cost[must1];
	dijkstra(must1);
	ans1+=cost[must2];
	ans2+=cost[must2];
	ans1=min(ans1,ans2);
	if(ans1>=INF){
		printf("-1");
	}
	else{
		printf("%d",ans1);
	}
}
