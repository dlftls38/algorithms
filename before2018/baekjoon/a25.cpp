#include <stdio.h>

int main(){
	
	int i,j,c;
	int k=0;
	
	scanf("%d",&c);
	
	for(i=1; i<c+1; i++){
		
		for(j=1; j<i+1; j++){
			
			if(i*i + j*j == c*c){
				
				k+=1;
				printf("%d %d ", j, i);
				break;
				
			}
		}
		if(k>0){
			
			break;
		}
	}
	
	if(k==0){
		
		printf("-1");
	}
}
