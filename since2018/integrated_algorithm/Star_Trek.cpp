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

long long n,p[100001],s[100001],pSum[100001],m[100001],in;

long long f(int k){
	long long &ret = m[k];
	if(~ret) return ret;
	ret = 1e18;
	if(k == 1) return ret = p[i];
	for(int i=1;i<k;i++){
		ret = min(ret,f(i)+p[i]+s[i]*(pSum[k]-pSum[i-1]));
	}
	printf("k : %d ret :%lld\n",k,ret);
	return ret;
}

int main(){
	memset(m,-1,sizeof(m));
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		scanf("%lld",&in);
		pSum[i+1] = pSum[i]+in;
	}
	for(int i=1;i<n;i++){
		scanf("%lld%lld",&p[i],&s[i]);
	}
	printf("%lld\n",f(n));
}
