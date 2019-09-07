#include <stdio.h>

void swap(int* a, int* b){
	
	int temp=*a;
	*a=*b;
	*b=temp;
	
		
}

int main() {
	
	int n,i,j;
	int c=0;
	int input[1000];
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		
		scanf("%d",&input[i]);
	}
	
	for(i=0; i<n; i++){
		
		for(j=0; j<n-1; j++){
			
			if (input[j]>input[j+1]){
				swap(&input[j],&input[j+1]);
				c+=1;
			}
		}
	}
	
	printf("%d",c);
}
