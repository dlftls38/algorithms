#include <stdio.h>

int input[10000];
int input2[10000];
int result=1;
int main() {
	
	int n,i,j;
	int c=0;
	int d=0;
	int min=10000000;
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		
		scanf("%d",&input[i]);
	}
	
	for (i=0;i<n;i++){
		
		if(min>input[i]){
			
			min=input[i];
		}
	}
	for (i=2; i<min+1; i++){
		
		for(j=0; j<n; j++){
			
			if(input[j]%i==0){
				
				c+=1;
			}
		}
		
		if (c==n){
			
			input2[d]=i;
			d+=1;
		}
		c=0;
	}
	
	for(i=0;i<d;i++){
		
		if(input2[i]!=0){
			
			result *=input2[i];
		}
	}
	
	printf("%d",result);
}  
