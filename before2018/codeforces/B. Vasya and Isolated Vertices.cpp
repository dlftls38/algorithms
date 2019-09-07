#include <stdio.h>
int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	if(m==0){
		printf("%lld %lld",n,n);
		return 0;
	}
	if(m*2-n>=0){
		printf("0 ");
	}
	else{
		printf("%lld ",n-2*m);
	}
	long long answer=n-2;
	int k=1;
	for(long long i=1;i<m;i++){
		if(answer==0){
			break;
		}
		answer--;
		i+=k;
		k++;
	}
	printf("%lld",answer);
}
