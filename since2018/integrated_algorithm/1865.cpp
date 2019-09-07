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
int n,infinity;
vector<pair<int,int> > vv[501];
int cost[501];
void bellman_ford(int start){
	int i,j,k;
	for(i=0;i<=n;i++){
		cost[i]=INF;
	}
	cost[start]=0;
	for(i=0;i<n-1;i++){
		for(j=1;j<=n;j++){
			int size=vv[j].size();
			for(k=0;k<size;k++){
				if(cost[vv[j][k].first]>cost[j]+vv[j][k].second && cost[j]!=INF){
					cost[vv[j][k].first]=cost[j]+vv[j][k].second;
				}
			}
		}
	}
	for(j=1;j<=n;j++){
		int size=vv[j].size();
		for(k=0;k<size;k++){
			if(cost[vv[j][k].first]>cost[j]+vv[j][k].second && cost[j]!=INF){
				cost[vv[j][k].first]=cost[j]+vv[j][k].second;
				infinity=1;
			}
		}
	}
}
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int m,w;
		scanf("%d%d%d",&n,&m,&w);
		int i,j;
		for(i=0;i<m;i++){
			int s,e,t;
			scanf("%d%d%d",&s,&e,&t);
			vv[s].push_back(make_pair(e,t));
			vv[e].push_back(make_pair(s,t));
		}
		for(i=0;i<w;i++){
			int s,e,t;
			scanf("%d%d%d",&s,&e,&t);
			vv[s].push_back(make_pair(e,-t));
		}
		bellman_ford(1);
		if(infinity==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		for(i=1;i<=n;i++){
			vv[i].clear();
		}
		infinity=0;
	}
}
