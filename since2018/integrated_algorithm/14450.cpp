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
int dp[4][100010][21];
char color[4][100010][21];
char origin[100010];
int main(){
	int n,c;
	scanf("%d%d",&n,&c);
	int i,j,k;
	for(i=0;i<n;i++){
		char trash;
		scanf("%c%c",&trash,&origin[i]);
	}
	for(k=0;k<=c;k++){
		color[0][0][k]='P';
	}
	for(k=0;k<=c;k++){
		color[1][0][k]='H';
	}
	for(k=0;k<=c;k++){
		color[2][0][k]='S';
	}
	for(k=0;k<=c;k++){
		if(color[0][0][k]==origin[0])dp[0][0][k]=1;
	}
	for(k=0;k<=c;k++){
		if(color[1][0][k]==origin[0])dp[1][0][k]=1;
	}
	for(k=0;k<=c;k++){
		if(color[2][0][k]==origin[0])dp[2][0][k]=1;
	}
	for(i=0;i<3;i++){
		for(j=1;j<n;j++){
			for(k=0;k<=c;k++){
				dp[i][j][k]=dp[i][j-1][k];
				color[i][j][k]=color[i][j-1][k];
				if(color[i][j-1][k]==origin[j]){
					dp[i][j][k]++;
				}
				if(k>0 && dp[i][j][k]<dp[i][j-1][k-1]+1){
					dp[i][j][k]=dp[i][j-1][k-1]+1;
					color[i][j][k]=origin[j];
				}
			}
		}
	}
//	for(i=0;i<3;i++){
//		for(j=0;j<=c;j++){
//			for(k=0;k<n;k++){
//				printf("%c ",color[i][k][j]);
//			}
//			printf("\n");
//			for(k=0;k<n;k++){
//				printf("%d ",dp[i][k][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
	int ans=0;
	for(i=0;i<3;i++){
		for(j=0;j<n;j++){
			for(k=0;k<=c;k++){
				ans=max(ans,dp[i][j][k]);
			}
		}
	}
	printf("%d",ans);
}
/*
10 5
S P H S P H S P H S
*/
