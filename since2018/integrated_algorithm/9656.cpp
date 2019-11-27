#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int dp[1010]={0};
	dp[1]=1;
	int i;
	for(i=1;i<=1000;i++){
		if(dp[i]==1){
			dp[i+1]=2;
			dp[i+3]=2;
		}
		else{
			dp[i+1]=1;
			dp[i+3]=1;
		}
	}
	printf("%s",dp[n]==2?"SK":"CY");
}
