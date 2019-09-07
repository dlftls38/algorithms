#include <stdio.h>
int main(){
	int n,i;
	long long m,spare=0;
	scanf("%d %lld",&n,&m);
	for(i=0;i<n;i++){
		long long x;
		scanf("%lld",&x);
		printf("%lld ",(spare+x)/m);
		spare+=x;
		spare%=m;
	}
}
