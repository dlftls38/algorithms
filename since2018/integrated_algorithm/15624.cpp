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
int dp[1000001];
int fibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n<3){
		return 1;
	}
	int &res=dp[n];
	if(res!=0){
		return res;
	}
	return res = (fibonacci(n-1) + fibonacci(n-2))%MOD;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fibonacci(n));
}
