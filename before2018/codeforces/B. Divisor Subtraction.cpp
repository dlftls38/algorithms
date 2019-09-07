#include <stdio.h>
const int PN = 1000000;
 
bool isprime[PN+5];
int prime[PN+5];
 
void primechk(){
    for(long long i=2; i<=PN; i++) isprime[i] = true;
    for(long long i=2; i<=PN; i++)
        if(isprime[i])
            for(long long j=i*i; j<=PN; j+=i)
                isprime[j] = false;
}
int main(){
	long long n;
	scanf("%lld",&n);
	int i,j;
	int tail=0;
	primechk();
	for(i=2;i<1000001;i++){
		if(isprime[i]==true){
			prime[tail++]=i;
		}
	}
	long long count=0;
	while(1){
		int p=0;
		if(n%2==0){
			count+=n/2;
			break;
		}
		for(i=0;i<tail;i++){
			if(n%prime[i]==0){
				n-=prime[i];
				count++;
				p=1;
				break;
			}
		}
		if(n==0){
			break;
		}
		if(p==0){
			count++;
			break;
		}
	}
	printf("%lld",count);
}
