#include <stdio.h>

int main(){
	
	int n,i,k,max=-2000000,min=2000000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		scanf("%d",&k);
		if(k>max){
			
			max=k;
		}
		if(k<min){
			
			min=k;
		}
	}
	printf("%d %d",min,max);
}
