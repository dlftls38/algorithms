#include <stdio.h>
int main(){
	int i,n;
	unsigned long long a=0,b=1,c=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("%llu",c);
}
