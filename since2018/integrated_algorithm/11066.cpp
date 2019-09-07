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
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j,k;
		int a[500]={0};
		int sum[501]={0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum[i+1]=a[i]+sum[i];
		}
		int dp[500][500]={0};
		for(i=1;i<n;i++){
			for(j=0;i+j<n;j++){
				int x=i+j;
				int y=j;
				dp[y][x]=INT_MAX;
				for(k=y;k<x;k++){
					int mid=k;
					dp[y][x]=min(dp[y][x],dp[y][mid]+dp[mid+1][x]+sum[x+1]-sum[y]);
				}
			}
		}
		printf("%d\n",dp[0][n-1]);
	}
}
