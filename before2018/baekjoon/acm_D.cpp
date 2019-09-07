#include <stdio.h>
int main(){
	long long a[1000]={0};
	a[0]=1;
	a[1]=1;
	int i;
	for(i=2;i<50;i++){
		a[i]=(a[i-1]+a[i-2])%10;
		printf("%lld\n",a[i]);
	}
}
