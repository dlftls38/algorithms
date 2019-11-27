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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
struct node{
	int node;
	int time;
	int robot;
};
vector<node>link[20001];
int cost[3][20001];
int main(){
	int n,m;
	cin>>n>>m;
	int i,j,k;
	for(i=0;i<m;i++){
		int a,b,t;
		cin>>a>>b>>t;
		link[a].push_back({b,t});
		link[b].push_back({a,t});
	}
	for(i=0;i<3;i++){
		for(j=1;j<=n;j++){
			cost[i][j]=INF;
		}
	}
	int u,v,w;
	cin>>u>>v>>w;
	cost[0][u]=0;
	cost[1][v]=0;
	cost[2][w]=0;
	queue<node>q;
	q.push({u,0,0});
	q.push({v,0,1});
	q.push({w,0,2});
	while(!q.empty()){
		int cur_node=q.front().node;
		int cur_time=q.front().time;
		int cur_robot=q.front().robot;
		//printf("%d %d %d\n",cur_node,cur_time,cur_robot);
		q.pop();
		for(i=0;i<link[cur_node].size();i++){
			if(cost[cur_robot][link[cur_node][i].node]>cur_time+link[cur_node][i].time){
				cost[cur_robot][link[cur_node][i].node]=cur_time+link[cur_node][i].time;
				q.push({link[cur_node][i].node,cost[cur_robot][link[cur_node][i].node],cur_robot});
			}
		}
	}
	int ans_cost=INF;
	for(i=1;i<=n;i++){
		if(ans_cost>max({cost[0][i], cost[1][i], cost[2][i]})){
			ans_cost=max({cost[0][i], cost[1][i], cost[2][i]});
		}
		//printf("%d %d %d !!%d\n",cost[0][i],cost[1][i],cost[2][i],max({cost[0][i], cost[1][i], cost[2][i]}));
	}
	printf("%d",ans_cost);
}
