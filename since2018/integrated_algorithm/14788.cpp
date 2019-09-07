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
int len,k;
int solve(int bit){
	int i,j;
	int dp[1<<10];
	for(i=0;i<(1<<10);i++){
		dp[i]=INF;
	}
	queue<pair<int,int> >q;
	q.push({bit,0});
	dp[bit]=0;
	while(!q.empty()){
		bit=q.front().first;
		int cnt=q.front().second;
		q.pop();
		int t2=bit;
//		for(i=0;i<len;i++){
//			if(t2%2==0){
//				printf("0");
//			}
//			else{
//				printf("1");
//			}
//			t2/=2;
//		}
//		printf("   %d\n",cnt);
		if(bit==(1<<len)-1){
			return cnt;
		}
		for(i=0;i<len-k+1;i++){
			int temp=bit;
			for(j=i;j<k+i;j++){
				temp ^= 1<<j;
			}
			if(dp[temp]>cnt+1){
				dp[temp]=cnt+1;
				q.push({temp,cnt+1});
			}
		}
	}
	return INF;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		char s[11];
		scanf("%s%d",s,&k);
		len=strlen(s);
		int temp=1;
		int cur=0;
		for(j=0;j<len;j++){
			if(s[j]=='+'){
				cur+=temp;
			}
			temp<<=1;
		}
		int ans=solve(cur);
		if(ans==INF)
			printf("Case #%d: IMPOSSIBLE\n",i);
		else
			printf("Case #%d: %d\n",i,ans);
	}
}
