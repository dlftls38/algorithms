#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
#include <limits.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	int r[501]={0};
	int c[501]={0};
	for(i=1;i<=n;i++){
		scanf("%d%d",&r[i],&c[i]);
	}
	int dp[501][501]={0};
	for(i=1;i<n;i++){
		for(j=1;i+j<=n;j++){
			int y=j;
			int x=i+j;
			dp[y][x]=INT_MAX;
			for(k=y;k<x;k++){
				int mid=k;
				dp[y][x]=min(dp[y][x],dp[y][mid]+dp[mid+1][x]+r[y]*c[mid]*c[x]);
			}
		}
	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			printf("%d  ",dp[i][j]);
//		}
//		printf("\n");
//	}
	printf("%d",dp[1][n]);
}
