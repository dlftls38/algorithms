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
using namespace std;
typedef pair<int,int> pii;
int a[2000];
int b[2000];
int dp[2000][2000];
int n;
int solve(int l,int r){
	if(l==n || r==n){
		return 0;
	}
	int &ret=dp[l][r];
	if(ret!=-1){
		return ret;
	}
	ret=0;
	int candidate1=0,candidate2,candidate3;
	if(b[r]<a[l])
		candidate1=solve(l,r+1)+b[r];
	candidate2=solve(l+1,r);
	candidate3=solve(l+1,r+1);
	ret+=max(max(candidate1,candidate2),candidate3);
	return ret;
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	memset(dp,-1,sizeof(dp));
	printf("%d",solve(0,0));
}
