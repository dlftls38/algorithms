#include <stdio.h>

int number[1][3];

int main(){
	
	int k,i,j,n;
	
	scanf("%d",&n);
	
	for (i=2; i<n+1; i++){
		
		k=0;
		
		for (j=2; j<i+1; j++){
			
			if(i%j==0){
				
				k+=1;
			}
		}
		
		if (k==1){
			
			if (99<i && i<1000){
				
				number[0][0]=i/100;
				number[0][1]=(i-(i/100)*100)/10;
				number[0][2]=(i-(i/100)*100-(i-(i/100)*100)/10*10);
				
				if (number[0][0]==number[0][2]){
					
					printf("%d ",i);
				}
			}
			
			else if (9<i && i<100){
				
				number[0][0]=i/10;
				number[0][1]=(i-i/10*10);
				
				if (number[0][0]==number[0][1]){
					
					printf("%d ",i);
				}
			}
			
			else {
				
				printf("%d ",i);
			}
			
			
		}
	}
}
