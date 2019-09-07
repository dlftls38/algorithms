#include <stdio.h>

int main(){
	
	int n,i,j,k=1;
	
	scanf("%d",&n);
	
	for(i=2;i<n+1;i++){
		
		k*=i;
	}
	
	if(n==0 || n==1){
		
		printf("1");
	}
	else{
		
		printf("%d",k);
	}
}
