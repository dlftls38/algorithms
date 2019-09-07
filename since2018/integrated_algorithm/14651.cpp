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
int dp[33334][3];
int solve(int n,int sum){
	int &ret = dp[n][sum];
	if(ret!=-1){
		return ret;
	}
	if(n-1>=0){
		ret = solve(n-1,(sum+2)%3);
		ret +=solve(n-1,(sum+1)%3);
		ret%=MOD;
		return ret=(ret+solve(n-1,sum))%MOD;
	}
	else{
		return ret = sum==0?1:0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	memset(dp,-1,sizeof(dp));
	solve(n,0);
	printf("%d",(dp[n][0]-dp[n-1][0]+MOD)%MOD);
}
