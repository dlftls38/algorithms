#include <stdio.h>

long long int ab(long long int a,long long int b){
	
	if(b==1){
		
		return a;
	}
	else {
		
		return ab(a, b-1)*a;
	}
}
int main() {
	
	long long int a,b;
	
	scanf("%lld%lld",&a,&b);
	
	printf("%lld",ab(a,b));
}
