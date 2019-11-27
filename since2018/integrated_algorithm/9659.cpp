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
int main(){
	long long n;
	scanf("%lld",&n);
	int dp[10000]={0};
	dp[1]=1;
	dp[2]=2;
	dp[3]=1;
	int i,j;
	for(i=4;i<10000;i++){
		if(dp[i-1]==2 || dp[i-3]==2){
			dp[i]=1;
		}
		else{
			dp[i]=2;
		}
	}
	if(n%2==0){
		printf("CY");
	}
	else{
		printf("SK");
	}
	//printf("%s",dp[n]==1?"SK":"CY");
}
