#include <stdio.h>
int main(){
	int i,n,a=1,b=2,temp;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		temp=a;
		a=b%10007;
		b+=temp;
	}
	printf("%d",a);
}
