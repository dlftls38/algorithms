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
using namespace std;
int sequence[1000001];
int dp[1000001];
int ans[1000001];
void recur(int n,int cnt){
	int &ret = dp[n];
	if(ret<=cnt){
		return;
	}
	ret=cnt;
	sequence[cnt]=n;
	if(n==1){
		for(int i=0;i<=cnt;i++){
			ans[i]=sequence[i];
		}
		return;	
	}
	if(n%3==0)
		recur(n/3,cnt+1);
	if(n%2==0)
		recur(n/2,cnt+1);
	recur(n-1,cnt+1);
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		dp[i]=INF;
	}
	recur(n,0);
	printf("%d\n",dp[1]);
	for(i=0;i<=dp[1];i++){
		printf("%d ",ans[i]);
	}
}
