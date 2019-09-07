#include <stdio.h>

int main() {
	
	int i,n,nn[500];
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		
		scanf("%d",&nn[i]);
	}
	
	for (i=0; i<n; i++){
		
		printf("%d ",nn[i]);
	}
} 
