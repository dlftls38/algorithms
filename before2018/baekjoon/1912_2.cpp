#include <stdio.h>
int main(){
	int n,i;
	long long max,a,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a);
		if(i==0) b=a;
		if(i==0) max=a;
		if(max<a) max=a;
		if(i!=0 && a+b>=a) b=a+b;
		if(i!=0 && a+b<a) b=a;
		if(b>max) max=b;
	}
	printf("%lld",max);
}
