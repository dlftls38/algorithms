#include <stdio.h>
int main(){
	int n,i;
	long long max,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%lld",&a[i]);
	max=a[0];
	for(i=0;i<n-1;i++){
		if(a[i]+a[i+1]>a[i+1]) a[i+1]=a[i]+a[i+1];
		if(a[i]>max) max=a[i];
		if(a[i+1]>max) max=a[i+1];
	}
	printf("%lld",max);
}
