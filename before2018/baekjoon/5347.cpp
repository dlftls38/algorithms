#include <stdio.h>
long long gcd(long long a,long long b){return b?gcd(b,a%b):a;}
int main(){
	int t;
	long long a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&a,&b);
		printf("%lld\n",(a*b)/gcd(a,b));
	}
}
