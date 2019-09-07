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
int dp[251][200];
int empty[200];
int* solve(int n){
    if(n == -1){
    	return empty;
	}
    if(n == 0){
    	dp[n][0]=1;
    	return dp[n];
	}
    int *res = dp[n];
    if(res[0] != -1){
    	return dp[n];
	}
    res[0] = 0;
    int *temp1 = solve(n-2);
    int *temp2 = solve(n-1);
    for(int i=0;i<199;i++){
    	res[i]+=temp1[i]*2+temp2[i];
    	if(res[i]>=10){
    		res[i+1]+=res[i]/10;
    		res[i]%=10;
		}
	}
    return res;
}

int main(){
    int n;
    for(int i=0;i<251;i++){
    	dp[i][0]=-1;
	}
    while(scanf("%d",&n)==1){
    	int *ans = solve(n);
    	int check=0;
    	for(int i=199;i>=0;i--){
    		if(ans[i]>0){
    			check=1;
			}
			if(check){
				printf("%d",ans[i]);
			}
		}
		printf("\n");
    }
    return 0;
}
