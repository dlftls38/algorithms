#include <stdio.h>
int main(){
	int i,t,n;
	unsigned long long a[67]={1,1,2,4,};
	for(i=4;i<68;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3]+a[i-4];
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%llu\n",a[n]);
	}
}
