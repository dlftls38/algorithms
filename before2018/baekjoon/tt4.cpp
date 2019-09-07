#include <stdio.h>


	int nn[500],nn1[500],nn2[500];
int main() {
	
	int n,i;
	int a=0;
	int b=0;
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		
		scanf("%d",&nn[i]);
	}
	
	for(i=0; i<n; i++){
		
		if(nn[i]%2==0){
			
			nn1[i]=nn[i];
		}
		
		else {
			
			nn2[i]=nn[i];
		}
	}
	
	for (i=0; i<n; i++){
		
		a+=nn1[i];
		b+=nn2[i];
	}
	
	printf("%d %d",a,b);
	
} 
