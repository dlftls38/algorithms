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
int g[401][401];
int main(){
	int v,e;
	scanf("%d%d",&v,&e);
	int i,j,k;
	for(i=1;i<=400;i++){
		for(j=1;j<=400;j++){
			g[i][j]=INF;
		}
	}
	for(i=0;i<e;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		g[a][b]=min(c,g[a][b]);
	}
	for(i=1;i<=v;i++){
		for(j=1;j<=v;j++){
			for(k=1;k<=v;k++){
				g[j][k]=min(g[j][k],g[j][i]+g[i][k]);
			}
		}
	}
	int ans=INF;
	for(i=1;i<=v;i++){
		ans=min(ans,g[i][i]);
	}
	if(ans==INF){
		printf("-1");
	}
	else{
		printf("%d",ans);
	}
}
