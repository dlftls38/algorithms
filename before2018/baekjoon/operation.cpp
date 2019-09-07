#include <stdio.h>

int main(){
	
	int i;
	int j;
	char k;
	
	scanf("%c",&k);
	scanf("%d",&i);
	scanf("%d",&j);
	if (k==42){
		
		printf("%d",i*j);
	}
	if (k==43){
		
		printf("%d",i+j);
	}
	if (k==45){
		
		printf("%d",i-j);
	}
} 
