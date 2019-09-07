#include <stdio.h>
int main(){
	int n;
	long long m;
	scanf("%d%lld",&n,&m);
	int i;
	long long sum=0;
	for(i=0;i<n;i++){
		long long x;
		scanf("%lld",&x);
		sum+=x;
		printf("%d ",sum/m);
		sum%=m;
	}
}
