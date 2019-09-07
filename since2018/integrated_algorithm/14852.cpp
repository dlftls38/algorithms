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
int dp[1000000][3];

int f(int n, char bit){
    if(n == -1) return 0;
    if(n == 0) return bit == 0;
    int& r = dp[n][bit];
    if(r != -1) return r;
    
    r = 0;
    if(bit == 0){
    	r = (r + f(n-1,0))%MOD;
    	r = (r + f(n-1,1))%MOD;
    	r = (r + f(n-1,2))%MOD;
    	r = (r + f(n-2,0))%MOD;
    	r = (r + f(n-1,0))%MOD;
    }
    if(bit == 1){
        r = (r + f(n-1,1))%MOD;
    	r = (r + f(n-1,0))%MOD;
    }
    if(bit == 2){
        r = (r + f(n-1,2))%MOD;
    	r = (r + f(n-1,0))%MOD;
    }
    return r;
}

int main(){
    int n;
    scanf("%d", &n);
    memset(dp, -1, sizeof(dp));
    printf("%d", f(n, 0));
    return 0;
}
