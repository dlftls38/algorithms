#include <stdio.h>

int main(){
	
	int i=0;
	int n=0;
	int input[10000];
	int result=0;
	int result2=0;
	
	scanf ("%d",&n);
	for (i=0; i<n; i++){
		
		scanf ("%d",&input[i]);	
	}
	
	for (i=0; i<n; i++){
		
		if (input[i] >= result){
			
			result = input[i];
		}
	}
	for (i=0; i<n; i++){
		
		if (result == input[i]){
			
			input[i] = 0;
		}
	}
	for (i=0; i<n; i++){
		
		if (input[i] >= result2){
			
			result2 = input[i];
		}
	}
	for (i=0; i<n; i++){
		
		if (result2 == input[i]){
			
			input[i] = 0;
		}
	}
	
	printf("%d",result + result2);
}
