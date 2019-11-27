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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
string s[2];
int dp[2][212121];
bool ans;
int n;
void solve(int cur){
	if(cur==n){
		return;
	}
	solve(cur+1);
	if(cur==n-1){
		if(s[1][cur]<='2'){
			dp[1][cur]=1;
		}
		if(s[0][cur]>='3' && s[1][cur]>='3'){
			dp[0][cur]=1;
		}
	}
	else{
		if(dp[0][cur+1]==1){
			if(s[0][cur]<='2'){
				dp[0][cur]=1;
			}
			if(s[0][cur]>='3' && s[1][cur]>='3'){
				dp[1][cur]=1;
			}
		}
		if(dp[1][cur+1]==1){
			if(s[1][cur]<='2'){
				dp[1][cur]=1;
			}
			if(s[0][cur]>='3' && s[1][cur]>='3'){
				dp[0][cur]=1;
			}
		}
	}
	if(cur==0){
		if(dp[0][cur]==1){
			ans=true;	
		}
	}
}
int main(){
	int q;
	cin>>q;
	while(q--){
		cin>>n;
		cin>>s[0]>>s[1];
		int i;
		for(i=0;i<n;i++){
			dp[0][i]=0;
			dp[1][i]=0;
		}
		ans=false;
		solve(0);
		if(ans){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
