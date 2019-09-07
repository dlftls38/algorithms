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
#define INF 100000000
using namespace std;
pair<int,int> g[101][101];
stack<int>s;
void dq(int l,int r){
	if(g[l][r].second!=0){
		dq(g[l][r].second,r);
		s.push(g[l][r].second);
		dq(l,g[l][r].second);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	for(i=1;i<=100;i++){
		for(j=1;j<=100;j++){
			g[i][j]={INF,0};
		}
	}
	for(i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		g[a][b]={min(c,g[a][b].first),0};
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				if(j!=k){
					if(g[j][k].first>g[j][i].first+g[i][k].first){
						g[j][k]={g[j][i].first+g[i][k].first,i};
					}
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(g[i][j].first==INF)
				printf("0 ");
			else
				printf("%d ",g[i][j].first);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(g[i][j].first==INF){
				printf("0");
			}
			else{
				while(!s.empty())s.pop();
				s.push(j);
				dq(i,j);
				s.push(i);
				printf("%d ",s.size());
				while(!s.empty()){
					printf("%d ",s.top());
					s.pop();
				}
			}
			printf("\n");
		}
	}
}
