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
int g[101][101];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	for(i=1;i<=100;i++){
		for(j=1;j<=100;j++){
			g[i][j]=INF;
		}
	}
	for(i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		g[a][b]=min(c,g[a][b]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				if(j!=k){
					g[j][k]=min(g[j][k],g[j][i]+g[i][k]);
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(g[i][j]==INF)
				printf("0 ");
			else
				printf("%d ",g[i][j]);
		}
		printf("\n");
	}
}
