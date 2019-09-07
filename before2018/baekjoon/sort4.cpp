#include <stdio.h>

int input[2000],index[2000],result[2000];

void swap(int* a, int* b){
	
	int temp=*a;
	*a=*b;
	*b=temp;
	
		
}

int main() {
	
	int n,i,j;
	int min;
	int c;
	int min2 = 10000000;
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		
		scanf("%d",&input[i]);
	}
	
	for (i=0; i<n+1; i++){
		
		index[i+1]=input[i];
	}
	
	for(i=0; i<n-1; i++){
		
		min = input[i];
		
		for(j=1+i; j<n; j++){
			
			if (min2>input[j]){
				
				min2 = input[j];
				c=j;
			}
		}
		if (min>min2){
			
			swap(&input[i],&input[c]);
		}
		min2 = 10000000;
	}
	
	for (i=0; i<n; i++){
		
		for(j=1; j<n+1; j++){
			
			if (input[i]==index[j]){
				result[i]=j;
				index[j]=0;
				break;
			}
		}
	}
	for(i=0; i<n; i++){
		
		printf("%d ",result[i]);
	}
}

