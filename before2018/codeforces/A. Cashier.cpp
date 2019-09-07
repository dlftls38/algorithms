#include <stdio.h>
int main(){
	int n;
	long long L,a;
	scanf("%d%lld%lld",&n,&L,&a);
	long long answer=0;
	long long now=0;
	for(int i=0;i<n;i++){
		long long t,l;
		scanf("%lld%lld",&t,&l);
		answer+=(t-now)/a;
		now=t+l;
	}
	answer+=(L-now)/a;
	printf("%lld",answer);
}
