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
	int m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		vv[a].push_back(make_pair(b,c));
	}
	bellman_ford(1);
	if(infinity==1){
		printf("-1");
		return 0;
	}
	for(i=2;i<=n;i++){
		if(cost[i]==INF)
			printf("-1\n");
		else
			printf("%d\n",cost[i]);
	}
}
