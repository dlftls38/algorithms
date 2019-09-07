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
int dp[31];

int solve(int n){
    if(n == -1) return 0;
    if(n == 0) return 1;
    int& r = dp[n];
    if(r != -1) return r;
    
    r = 0;
    r+=solve(n-2)*2;
    r+=solve(n-1);
    return r;
}

int main(){
    int n;
    scanf("%d", &n);
    memset(dp, -1, sizeof(dp));
    solve(n);
    if(n==1){
    	printf("1");
	}
	else if(n%2==0){
		printf("%d",(dp[n]+dp[n/2+1])/2);
	}
	else{
		printf("%d",(dp[n]+dp[n/2])/2);	
	}
    return 0;
}
