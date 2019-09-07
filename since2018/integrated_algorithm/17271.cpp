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
#define MOD 1000000007
using namespace std;
typedef pair<int,int> pii;
int m;
int dp[10001];
int solve(int n){
	if(n==0){
		return 1;
	}
	int &ret=dp[n];
	if(ret!=-1){
		return ret;
	}
	ret=0;
	if(n-m>=0){
		ret = (ret+solve(n-m))%MOD;
	}
	ret = (ret+solve(n-1))%MOD;
	return ret;
}
int main(){
	int n;
	scanf("%d%d",&n,&m);
	memset(dp,-1,sizeof(dp));
	printf("%d",solve(n));
}
