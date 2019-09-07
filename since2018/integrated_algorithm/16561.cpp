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
int dp[3001][4];
int solve(int n,int cnt){
	if(cnt==0){
		if(n==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	int &res = dp[n][cnt];
	if(res!=0){
		return res;
	}
	int cur=3;
	for(int i=1;i<=1000;i++){
		if(n-cur*i>=0 && cnt-1>=0){
			res += solve(n-cur*i,cnt-1);
		}
		else{
			break;
		}
	}
	return res;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",solve(n,3));
}
