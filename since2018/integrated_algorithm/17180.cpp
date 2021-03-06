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
	int n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	int i,j;
	int dp[345][345]={0};
	for(i=1;i<=n;i++){
		dp[i][0]=INF;
	}
	for(i=1;i<=m;i++){
		dp[0][i]=INF;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			dp[i][j] = abs(s[i-1]-t[j-1]);
			dp[i][j] += min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
			//printf("%d ",dp[i][j]);
		}
		//printf("\n");
	}
	cout << dp[n][m];
}
