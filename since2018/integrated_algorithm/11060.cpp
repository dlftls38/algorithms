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
	int dp[1000]={0};
//	for(int i=0;i<n;i++){
//		dp[i]=INT_MAX-1;
//	}
	fill(&dp[0],&dp[n],INT_MAX-1);
	dp[0]=0;
	int i,j;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		for(j=1;j<x+1;j++){
			if(i+j<n){
				dp[i+j]=min(dp[i+j],dp[i]+1);
			}
		}
	}
	if(dp[n-1]==INT_MAX-1){
		printf("-1");
	}
	else{
		printf("%d",dp[n-1]);
	}
}
