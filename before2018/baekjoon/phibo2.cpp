#include <stdio.h>
int main(){
	
	int a=1;
	int b=1;
	int n=0;
	int k=0;
	int c=1;
	scanf("%d",&n);
	
	if (n==1){
		printf("1");
	}
	if (n==2){
		printf("1");
	}
	while(n!=1 && n!=2 && k<n-2){
		b=c;
		c=a;
		a=b+c;
		k++;
		if (k==n-2){
		
		printf("%d",a);
		}
	}
	
}


