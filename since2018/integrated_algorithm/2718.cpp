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
int dp[501][13];

int f(int n, char bit){
    if(n == -1) return 0;
    if(n == 0) return bit == 0;
    int& r = dp[n][bit];
    if(r != -1) return r;
    
    r = 0;
    if(bit == 0){
        r += f(n-1, 0);
        r += f(n-1, 3);
        r += f(n-1, 9);
        r += f(n-1, 12);
        r += f(n-2, 0);
    }
    if(bit == 3){
        r += f(n-1, 0);
        r += f(n-1, 12);
    }
    if(bit == 6){
        r += f(n-1, 9);
    }
    if(bit == 9){
        r += f(n-1, 0);
        r += f(n-1, 6);
    }
    if(bit == 12){
        r += f(n-1, 0);
        r += f(n-1, 3);
    }
    return r;
}

int main(){
    int t, n;
    scanf("%d", &t);
    memset(dp, -1, sizeof(dp));
    while(t--){
        scanf("%d", &n);
        printf("%d\n", f(n, 0));
    }
    return 0;
}
