#include<stdio.h>

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	if(n==1 || n==2){
		
		printf("0");
	}
	
	else {
		
		printf("%d",(n-2)*12);
	}
}
