#include <stdio.h>

int main () {
	
	float n;
	int i;
	int j;
	
	scanf("%f",&n);
	for (i=n; i>0; i--){
		for (j=1; j<n+1; j++ ){
			if (n/i-j==0){
				
				printf("%d ",(int)n/i);
			}
			
		}
	}
}


