#include<stdio.h>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#include<vector>
#include<set>
#include<string>
#include<string.h>
#include<algorithm>
#define MOD 16769023
#define INF 987654321
using namespace std;
int a[3000]={0};
int b[3000]={0};
int n;
int dp[3][3000];
int solve(int cur){
	if(cur==n){
		dp[0][cur]=0;
		dp[1][cur]=0;
		dp[2][cur]=0;
		return 0;
	}
	int &ret = dp[2][cur];
	if(ret!=-1){
		return ret;
	}
	dp[0][cur]=0;
	dp[1][cur]=0;
	ret=solve(cur+1);
	if(dp[0][cur+1]+a[cur]<dp[1][cur+1]+b[cur]){
		dp[0][cur]=dp[0][cur+1]+a[cur];
	}
	else{
		dp[1][cur]=dp[1][cur+1]+b[cur];
	}
	return min(dp[0][cur],dp[1][cur]);
}
int main(){
	scanf("%d",&n);
	int a[3000]={0};
	int b[3000]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		for(j=0;j<3;j++){
			dp[j][i]=-1;
		}
	}
	printf("%d",solve(0));
}
