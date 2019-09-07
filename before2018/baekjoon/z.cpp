#include <stdio.h>

int main(){
	
	int n;
	int m=2;
	int i;
	
	scanf("%d",&n);
	
	for (i = 0; i < n; i++){
		printf("*");
	}
	printf("\n");
	
	while (n-m>0){
		for(i = 0; i < n-m; i++){
			printf(" ");
		}
		printf("*\n");
		m++;
	}
	
	for (i = 0; i < n; i++){
		printf("*");
	}
}
