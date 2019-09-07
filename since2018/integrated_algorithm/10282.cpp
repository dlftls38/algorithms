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
#define INF 10000000
using namespace std;
int n;
vector<pair<int,int> > vv[10001];
int cost[10001];
void dijkstra(int start){
	int i,j;
	for(i=0;i<=n;i++){
		cost[i]=INF;
	}
	priority_queue<pair<pair<int,int>,int> ,vector<pair<pair<int,int>,int> >, greater<pair<pair<int,int>,int> > > pq;
	pq.push(make_pair(make_pair(0,start),start));
	cost[start]=0;
	while(!pq.empty()){
		int cur_val=pq.top().first.first;
		int cur_pos=pq.top().first.second;
		pq.pop();
		if(cur_val > cost[cur_pos]) continue;
		int len=vv[cur_pos].size();
		for(i=0;i<len;i++){
			int next_pos=vv[cur_pos][i].first;
			int next_val=vv[cur_pos][i].second;
			if(cost[next_pos]>cur_val+next_val){
				pq.push(make_pair(make_pair(cur_val+next_val,next_pos),cur_pos));
				cost[next_pos]=cur_val+next_val;
			}
		}
	}
}
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int d,c;
		scanf("%d%d%d",&n,&d,&c);
		int i,j;
		for(i=0;i<d;i++){
			int a,b,s;
			scanf("%d%d%d",&a,&b,&s);
			vv[b].push_back(make_pair(a,s));
		}
		dijkstra(c);
		int cnt=0;
		int last=0;
		for(i=1;i<=n;i++){
			if(cost[i]!=INF){
				last=max(last,cost[i]);
				cnt++;	
			}
		}
		printf("%d %d\n",cnt,last);
		for(i=0;i<=n;i++){
			vv[i].clear();
		}
	}
}
