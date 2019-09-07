#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long sum=1;
	int i;
	for(i=0;i<n;i++){
		sum*=3;
		sum%=1000000007;
	}
	printf("%lld",sum-1);
}
