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
long long dp[117];
long long solve(int n){
	long long &ret=dp[n];
	if(ret!=0){
		return ret;
	}
	return ret=solve(n-1)+solve(n-3);
}
int main(){
	dp[1]=1;
	dp[2]=1;
	dp[3]=1;
	int n;
	scanf("%d",&n);
	printf("%lld",solve(n));
}
