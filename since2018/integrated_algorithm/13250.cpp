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
using namespace std;
const int maxn = 1000005; 
double dp[maxn]; 
int main(){
	int i,j;
	int n;
	scanf("%d",&n);
	dp[0]=0; 
	dp[1]=1;  
	for(i=2;i<= n;i++){
		for(j=1;j<=6;j++){
			if(i-j>=0){
				dp[i]+=(1+dp[i-j])*(1.0/6.0);   
			}
			else{
				dp[i]+=1.0/6.0;  
			}
		}
	}
	printf("%.9f",dp[n]);
}
