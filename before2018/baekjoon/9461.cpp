#include <stdio.h>
int main(){
	int i,t;
	long long a[100]={1,1,1,2,2,3,};
	scanf("%d",&t);
	for(i=5;i<100;i++){
		a[i]=a[i-1]+a[i-5];
	}
	while(t--){
		scanf("%d",&i);
		printf("%lld\n",a[i-1]);
	}
}
