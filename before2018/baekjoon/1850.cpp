#include <stdio.h>
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long c=gcd(a,b);
	int i;
	for(i=0;i<c;i++){
		printf("1");
	}
}
