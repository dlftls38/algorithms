#include <stdio.h>
#include <string.h>

int main(){
	
	int i=0;
	char a[100];
	char b;
	int j=0;
	int k=0;
	scanf("%d",&i);
	scanf("%s",a);
	scanf("%c",&b);
	for (k=0; k<strlen(a); k++){
		
		if (a[k]==b){
			
			j++;
		}
	}
	printf("%d",j);
	
}

