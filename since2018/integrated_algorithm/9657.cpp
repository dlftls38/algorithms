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
	dp[2]=2;
	dp[3]=1;
	dp[4]=1;
	dp[5]=1;
	int i;
	for(i=6;i<=1000;i++){
		if(dp[i-1]==2 || dp[i-3]==2 || dp[i-4]==2){
			dp[i]=1;
		}
		else{
			dp[i]=2;
		}
	}
	printf("%s",dp[n]==1?"SK":"CY");
}
