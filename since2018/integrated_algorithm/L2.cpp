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

long long m[250][2],n,arr[250][2];

long long f(int k,bool l){
	long long &ret = m[k][l];
	if(~ret) return ret;
	if(k==0) return ret = arr[k][l];
	ret = arr[k][l];
	if(l) ret += f(k-1,!l);
	else ret += f(k-1,l);
	return ret;
}

int main(){
	memset(m,-1,sizeof(m));
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		scanf("%lld %lld",&arr[i][0],&arr[i][1]);
	}
	printf("%lld\n",min(f(n-1,0),f(n-1,1)));
}
