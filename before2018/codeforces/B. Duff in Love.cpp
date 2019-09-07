#include <stdio.h>
long long a[1000002];
int tail;
int main(){
	long long n;
	scanf("%lld",&n);
	long long answer=1;
	long long k=n;
	a[tail++]=1;
	for(long long i=2;i*i<=n;i++){
		while(1){
			if(k%i==0){
				k/=i;
				if(a[tail-1]!=i){
					a[tail++]=i;
					answer*=i;
				}
			}
			else{
				break;
			}
		}
	}
	if(k>1){
		answer*=k;
	}
	printf("%lld",answer);
}
