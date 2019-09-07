#include <stdio.h>
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long answer=0;
	if(k/2<n){
		if(k%2==1){
			answer=n-k/2<k/2 ? n-k/2 : k/2;
		}
		else{
			answer=n-k/2<k/2-1 ? n-k/2 : k/2-1;
		}
	}
	printf("%lld",answer);
}
