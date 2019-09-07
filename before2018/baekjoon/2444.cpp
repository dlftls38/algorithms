#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(j=0;j<i*2-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<n+1;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<n*2-1-i*2;j++){
			printf("*");
		}
		printf("\n");
	}	
}
