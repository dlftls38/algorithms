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
#define INF 1000000000
using namespace std;
int n,m;
vector<pair<pair<int,int>,int > > vv[101];
int dc[101][10001];
int dijkstra(int start){
	priority_queue<pair<pair<int,int>,int> ,vector<pair<pair<int,int>,int> >, greater<pair<pair<int,int>,int> > > pq;
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=m;j++){
			dc[i][j]=INF;
		}
	}
	pq.push(make_pair(make_pair(0,0),1));
	while(!pq.empty()){
		int cur_delay=pq.top().first.first;
		int cur_cost=pq.top().first.second;
		int cur_pos=pq.top().second;
		pq.pop();
		if(cur_pos==n){
			return cur_delay;
		}
		if(dc[cur_pos][cur_cost]<cur_delay){
			continue;
		}
		int len=vv[cur_pos].size();
		for(i=0;i<len;i++){
			if(cur_cost+vv[cur_pos][i].first.second<=m && dc[vv[cur_pos][i].first.first][cur_cost+vv[cur_pos][i].first.second]>cur_delay+vv[cur_pos][i].second){
				pq.push(make_pair(make_pair(cur_delay+vv[cur_pos][i].second,cur_cost+vv[cur_pos][i].first.second),vv[cur_pos][i].first.first));
				dc[vv[cur_pos][i].first.first][cur_cost+vv[cur_pos][i].first.second]=cur_delay+vv[cur_pos][i].second;
			}
		}
	}
	return INF;
}
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int k;
		scanf("%d%d%d",&n,&m,&k);
		int i,j;
		for(i=0;i<k;i++){
			int u,v,c,d;
			scanf("%d%d%d%d",&u,&v,&c,&d);
			vv[u].push_back(make_pair(make_pair(v,c),d));
		}
		int ans=dijkstra(1);
		if(ans!=INF){
			printf("%d\n",ans);
		}
		else{
			printf("Poor KCM\n");
		}
		for(i=0;i<101;i++){
			vv[i].clear();
		}
	}
}

