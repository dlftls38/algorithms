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
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
long long dp[51];
long long fibonacci(int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	long long &res=dp[n];
	if(res!=0){
		return res;
	}
	return res = (fibonacci(n-1) + fibonacci(n-2)+1)%MOD;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",fibonacci(n));
}
