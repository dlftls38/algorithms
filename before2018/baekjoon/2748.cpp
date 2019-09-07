#include <stdio.h>

int main(){
	
	int n,i,j;
	long long k=0,a=0,b=1;
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		
		k+=a+b;
		a=b;
		b=k;
		if(i!=n-1){
			k=0;
		}
	}
	if(n==1){
		
		printf("1");
	}
	else{
		
		printf("%lld",k);
	}
}
