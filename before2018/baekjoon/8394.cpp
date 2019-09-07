#include <stdio.h>
int main(){
	int n,a=2,b=3,t,i;
	scanf("%d",&n);
	for(i=2;i<n%60;i++) t=a%10,a=b%10,b+=t,b%=10;
	if(n==1) printf("0");
	else printf("%d",a);
}
