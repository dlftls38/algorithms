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
using namespace std;
int memory[101];
int cost[101];
int dp[10001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&memory[i]);
	}
	for(i=1;i<=n;i++){
		scanf("%d",&cost[i]);
	}
	for(i=1;i<=n;i++){
		for(j=10000;j>=0;j--){
			if(j-cost[i]>=0)
				dp[j]=max(dp[j],dp[j-cost[i]]+memory[i]);
		}
	}
	for(i=0;i<=10000;i++){
		if(dp[i]>=m){
			printf("%d",i);
			return 0;
		}
	}
}
