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
int n,t,g;
int dp[100000];
int solve(){
	queue<pair<int,int> >q;
	q.push({n,0});
	dp[n]=0;
	while(!q.empty()){
		int cur=q.front().first;
		int cnt=q.front().second;
		q.pop();
		if(cur==g){
			return cnt;
		}
		if(cnt==t){
			continue;
		}
		if(cur+1<=99999){
			if(dp[cur+1]>cnt+1){
				q.push({cur+1,cnt+1});
				dp[cur+1] = cnt+1;
			}
		}
		if(cur*2<=99999){
			cur*=2;
			if(cur>=10000){
				cur-=10000;
			}
			else if(cur>=1000){
				cur-=1000;
			}
			else if(cur>=100){
				cur-=100;
			}
			else if(cur>=10){
				cur-=10;
			}
			else if(cur>=1){
				cur-=1;
			}
			else{
				
			}
			if(dp[cur]>cnt+1){
				q.push({cur,cnt+1});
				dp[cur]	= cnt+1;
			}
		}
	}
	return INF;
}
int main(){
	scanf("%d%d%d",&n,&t,&g);
	for(int i=0;i<100000;i++){
		dp[i]=INF;
	}
	int ans=solve();
	if(ans<=t){
		printf("%d",ans);
	}
	else{
		printf("ANG");
	}
}
