#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		long long s,a,b,c;
		scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
		long long answer=0;
		answer=s/c;
		answer+=answer/a*b;
		printf("%lld\n",answer);
	}
}
