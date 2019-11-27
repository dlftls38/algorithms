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
using namespace std;
int main(){
	int n;
	int dp[100000]={0};
	scanf("%d",&n);
	int i,j;
	vector<int> v;
	for(i=1;i*i<=n;i++){
		v.push_back(i*i);
	}
	for(i=1;i<=n;i++){
		dp[i]=98765543;
	}
	int size=v.size();
	for(i=0;i<size;i++){
		for(j=1;j<=n;j++){
			if(j-v[i]>=0){
				dp[j]=min(dp[j],dp[j-v[i]]+1);
			}
		}
	}
	for(i=0;i<=n;i++){
		//printf("%d ",dp[i]);
	}
	printf("%d",dp[n]);
}
