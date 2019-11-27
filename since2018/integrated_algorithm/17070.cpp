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
int dp[23][23][3];
int mp[23][23];
int n;
int solve(int y, int x, int r){
	if(y==n-2 && x==n-2 && r==1 || y==n-2 && x==n-1 && r==2 || y==n-1 && x==n-2 && r==0){
		return 1;
	}
	int &ret = dp[y][x][r];
	if(ret!=-1){
		return ret;
	}
	ret = 0;
	if(r==0){
		if(mp[y][x+2]==0){
			ret += solve(y,x+1,0);
		}
		if(mp[y][x+2]==0 && mp[y+1][x+2]==0 && mp[y+1][x+1]==0){
			ret += solve(y,x+1,1);
		}
	}
	else if(r==1){
		if(mp[y+1][x+2]==0){
			ret += solve(y+1,x+1,0);
		}
		if(mp[y+2][x+1]==0){
			ret += solve(y+1,x+1,2);
		}
		if(mp[y+1][x+2]==0 && mp[y+2][x+1]==0 && mp[y+2][x+2]==0){
			ret += solve(y+1,x+1,1);
		}
	}
	else if(r==2){
		if(mp[y+2][x]==0){
			ret += solve(y+1,x,2);
		}
		if(mp[y+2][x]==0 && mp[y+2][x+1]==0 && mp[y+1][x+1]==0){
			ret += solve(y+1,x,1);
		}
	}
	return ret;
}
int main(){
	cin>>n;
	int i,j,k;
	memset(mp,-1,sizeof(mp));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>mp[i][j];
		}
	}
	memset(dp,-1,sizeof(dp));
	printf("%d",solve(0,0,0));
}
