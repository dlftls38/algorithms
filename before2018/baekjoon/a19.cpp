#include <stdio.h>

int number[1000];

int main(){
	
	int n,i,j,k;
	int max=0;
	int min=1000000000;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<n/2;i++){
		
		for(j=0;j<n;j++){
		
			if(max<number[j]){
			
				max=number[j];
				k=j;
			}
		}
	
		number[k]=0;
		max=0;		
	}
	
	for(j=0;j<n;j++){
		
		if(max<number[j]){
			
			max=number[j];
			k=j;
		}
	}
	
	printf("%d",number[k]);	
		
}	

