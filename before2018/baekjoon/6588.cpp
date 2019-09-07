#include <stdio.h>
int primes[1000001];
int odd_primes[80000];
int top;
int n=1000000;
void primeNumber()
{	int i,j;
    primes[0] = 0;
    primes[1] = 0;
    for (int i = 2; i <= n; i++)
        primes[i] = 1;
    for (int i = 2; i * i <= n; i++) {
        if (primes[i]==1) {
            for (int j = i * i; j <= n; j += i)
                primes[j] = 0;
        }
    }
}
int main(){
	int i,j,k,position=0,flag;
	primeNumber();
	for(i=3;i<1000001;i++){
		if(primes[i]==1) odd_primes[top++]=i;
	}
	while(1){
		flag=0;
		scanf("%d",&k);
		if(k==0) break;
		for(i=0;i<80000;i++){
			if(odd_primes[i]>k){
				position=i-1;
				break;
			}
		}
		for(i=position;i>-1;i--){
			for(j=0;j<i+1;j++){
				if(odd_primes[i]+odd_primes[j]>k) break;
				if(odd_primes[i]+odd_primes[j]==k){
					flag=1;
					printf("%d = %d + %d\n",k,odd_primes[j],odd_primes[i]);
					break;
				}
			}
			if(flag==1) break;
		}
		if(flag==0) printf("Goldbach's conjecture is wrong.\n");
	}
}
