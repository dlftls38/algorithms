#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	long long dp[100][21]={0};
	for(i=0;i<n-1;i++){
		int x;
		scanf("%d",&x);
		if(i==0){
			dp[0][x]=1;
		}
		else{
			for(j=0;j<=20;j++){
				if(dp[i-1][j]>0 && j+x>=0 && j+x<=20){
					dp[i][j+x]+=dp[i-1][j];
				}
				if(dp[i-1][j]>0 && j-x>=0 && j-x<=20){
					dp[i][j-x]+=dp[i-1][j];
				}
			}
		}
	}
//	for(i=0;i<n;i++){
//		for(j=0;j<=20;j++){
//			printf("%lld ",dp[i][j]);
//		}
//		printf("\n");
//	}
	int ans=0;
	scanf("%d",&ans);
	printf("%lld",dp[n-2][ans]);
}
