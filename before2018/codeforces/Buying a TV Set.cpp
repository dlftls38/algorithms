#include <stdio.h>
long long gcd(long long x,long long y){
	long long swap;
	while(y){
		swap=x%y;
		x=y;
		y=swap;
	}
	return x;
}
int main(){
	long long a,b,x,y;
	scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
	long long g=gcd(x,y);
	x/=g;
	y/=g;
	if(a/x==0 || b/y==0){
		printf("0");
	}
	else{
		if(a/x<b/y){
			printf("%lld",a/x);
		}
		else{
			printf("%lld",b/y);
		}
	}
}
