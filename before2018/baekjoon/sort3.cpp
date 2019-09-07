#include <stdio.h>

void swap(int* a, int* b){
	
	int temp=*a;
	*a=*b;
	*b=temp;
	
		
}

int main() {
	
	int n,i,j,k;
	int c=0;
	int input[1000];
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		
		scanf("%d",&input[i]);
	}
	
	for(i=1; i<n; i++){
		
		for(j=0; j<i; j++){
			
			if (input[j]>input[i]){
				for (k=0; k<i-j; k++){
					
					swap(&input[i-1-k],&input[i-k]);
					c+=1;
				}
			}
		}
	}
	
	printf("%d",c);
}
