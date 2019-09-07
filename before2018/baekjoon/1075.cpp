#include <stdio.h>
int main(){
	long long n;
	int f;
	scanf("%lld%d",&n,&f);
	n/=100;
	n*=100;
	int i;
	for(i=0;i<100;i++){
		if((n+i)%f==0){
			break;
		}
	}
	if(i<10){
		printf("0%d",i);
	}
	else{
		printf("%d",i);
	}
}
