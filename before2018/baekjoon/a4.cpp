#include <stdio.h>

int main(){
	
	int i,j,k;
	int n;
	
	scanf("%d",&n);
	
	for (i=3; i<n/2; i++){
		
		k=0;
		
		for(j=3; j<n-i+1; j++){
			
			if((n-i)%2==1&& (n-i)%j==0){
				
				k+=1;
			}
		}
		
		for(j=3; j<i+1; j++){
			
			if(i%2==1 && i%j==0){
				
				k+=1;
			}			
		}
		
		if (k==2){
			
			printf("%d %d",i,n-i);
			break;
		}	
	}
	
	
}
