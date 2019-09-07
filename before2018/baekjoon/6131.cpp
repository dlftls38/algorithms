#include <stdio.h>

int main(){
	
	int n,i,j,count=0;
	
	scanf("%d",&n);
	
	for(i=1;i<501;i++){
		
		for(j=1;j<501;j++){
			
			if(i*i + n == j*j){
				
				count++;
			}
		}
	}
	printf("%d",count);
}
