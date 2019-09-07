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
vector<pair<int,int> > vv[2001];
int cost[2001];
int before[2001];
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
		int before_pos=pq.top().second;
		pq.pop();
		if(cur_val > cost[cur_pos]) continue;
		before[cur_pos]=before_pos;
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
		int m;
		scanf("%d%d",&n,&m);
		int i,j;
		for(i=0;i<m;i++){
			int a,b,d;
			scanf("%d%d%d",&a,&b,&d);
			vv[a].push_back(make_pair(b,d));
			vv[b].push_back(make_pair(a,d));
		}
		dijkstra(1);
		for(i=0;i<=n;i++){
			vv[i].clear();
		}
		memset(before,0,sizeof(before));
	}
}
