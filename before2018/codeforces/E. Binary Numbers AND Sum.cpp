#include <stdio.h>
char a[200001]={0};
char b[200001]={0};
int main(){
	long long mod=998244353;
	int i,j;
	int n,m;
	scanf("%d%d%s%s",&n,&m,a,b);
	long long q=0,w=0;
	long long p=1;
	for(i=n-1;i>-1;i--){
		q+=(a[i]-48)*p;
		q%=mod;
		p*=2;
		p%=mod;
	}
	p=1;
	for(i=m-1;i>-1;i--){
		w+=(b[i]-48)*p;
		w%=mod;
		p*=2;
		p%=mod;
	}
	long long sum=0;
	for(;w>0;){
		sum+=(q&w)%mod;
		sum%=mod;
		w>>=1;
	}
	printf("%lld",sum);
}
