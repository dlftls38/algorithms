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
int dp[101][1001]={0};
int main(){
	int n,s,m;
	scanf("%d%d%d",&n,&s,&m);
	int i,j;
	dp[0][s]=1;
	for(i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		for(j=0;j<=m;j++){
			if(dp[i-1][j]>0){
				if(j-x>=0){
					dp[i][j-x]=1;
				}
				if(j+x<=m){
					dp[i][j+x]=1;
				}
			}
		}
	}
	int ans=-1;
	for(i=0;i<=m;i++){
		if(dp[n][i]>0){
			ans=i;
		}
	}
	printf("%d",ans);
}
