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
int dp[61][61][61];
int solve(int a,int b,int c){
	if(a<=0)a=0;
	if(b<=0)b=0;
	if(c<=0)c=0;
	if(a<=0 && b<=0 && c<=0){
		return 0;
	}
	int &ret=dp[a][b][c];
	if(ret!=0){
		return ret;
	}
	ret=INF;
	ret = min(ret,solve(a-9,b-3,c-1)+1);
	ret = min(ret,solve(a-9,b-1,c-3)+1);
	ret = min(ret,solve(a-3,b-9,c-1)+1);
	ret = min(ret,solve(a-3,b-1,c-9)+1);
	ret = min(ret,solve(a-1,b-3,c-9)+1);
	ret = min(ret,solve(a-1,b-9,c-3)+1);
	printf("%d %d %d %d\n",a,b,c,ret);
	return ret;
	
}
int main(){
	int n;
	scanf("%d",&n);
	int scv[3]={0};
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&scv[i]);
	}
	printf("%d",solve(scv[0],scv[1],scv[2]));
}
