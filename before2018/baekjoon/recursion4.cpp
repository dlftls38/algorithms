#include <stdio.h>

int number[1000];
int i,j;
int z;
int b=-1;
int a=0;

void abc(int k){
	for(i=0; i<1000; i++){
		
		if (number[i]==k && i != b){
			
			for(j=999; j>-1; j--){
				
				if(number[j] != 0){
					
					z=j;
					break;
				}
			}
						
			for(j=z; j>i-1; j--){
				
				number[j+1]=number[j];
			}
			
			for(j=z+1; j>i-1; j--){
				
				number[j+1]=number[j];
			}
						
			number[i]=k-1;
			number[i+1]=k;
			number[i+2]=k-1;
			
			b=i+1;
		}
	}
	if(k > 2){
		
		return abc(k-1);
	}
}

int main() {
	
	int n;
	
	scanf("%d",&n);
	
	number[0] = n;
	
	abc(n);
			
	for (i=0; i<1000; i++){
		
		if (number[i] != 0){
			
			printf("%d ",number[i]);
			a+=1;
			if(a==100){
				
				printf("\n");
			}
			if(a==200){
				
				printf("\n");
			}
			if(a==300){
				
				printf("\n");
			}
			if(a==400){
				
				printf("\n");
			}
			if(a==500){
				
				printf("\n");
			}
			if(a==600){
				
				printf("\n");
			}
			if(a==700){
				
				printf("\n");
			}
						
		}
	}
}
