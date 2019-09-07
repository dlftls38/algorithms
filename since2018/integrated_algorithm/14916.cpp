#include <bits/stdc++.h>
#define INF 987654321
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int dp[121212];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		dp[i]=INF;
	}
	for(i=0;i<=n;i++){
		dp[i+5]=min(dp[i+5],dp[i]+1);
		dp[i+2]=min(dp[i+2],dp[i]+1);
	}
	printf("%d",dp[n]==INF?-1:dp[n]);
}
