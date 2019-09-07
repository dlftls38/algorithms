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
	int n,m;
	int i,j;
	scanf("%d%d",&n,&m);
	int vip[41]={0};
	int dp[2][41]={0};
	dp[0][1]=1;
	for(i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		vip[x]=1;
	}
	for(i=2;i<=n;i++){
		if(vip[i]==1 || vip[i-1]==1){
			dp[0][i]=dp[0][i-1]+dp[1][i-1];
			dp[1][i]=0;
		}
		else{
			dp[0][i]=dp[0][i-1]+dp[1][i-1];
			dp[1][i]=dp[0][i-1];	
		}
	}
	printf("%d",dp[0][n]+dp[1][n]);
}
