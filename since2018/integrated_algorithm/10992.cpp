#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n-1;i++){
    	for(j=0;j<n-i-1;j++){
    		printf(" ");
		}
		printf("*");
		if(i==0){
			printf("\n");
		}
		else{
			for(j=0;j<i*2-1;j++){
				printf(" ");
			}
			printf("*\n");
		}
	}
	for(i=0;i<n*2-1;i++){
		printf("*");
	}
}
