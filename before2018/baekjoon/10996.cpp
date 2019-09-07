#include <stdio.h>

int main(){
	
	int n,i,j;
	
	scanf("%d",&n);
	
	if(n==1){
		
		printf("*");
	}
	else{
		
		if(n%2==0){
			
			for(i=0;i<n*2;i++){
				if(i%2==1){
					
					printf(" ");
				}
				for(j=0;j<n/2;j++){
					
					printf("* ");
				}
				printf("\n");
			}
		}
		else{
			
			for(i=0;i<n;i++){
				
				for(j=0;j<n/2+1;j++){
					
					printf("* ");
				}
				printf("\n");
				for(j=0;j<n/2;j++){
					
					printf(" *");
				}
				printf("\n");
			}
		}
	}
}
