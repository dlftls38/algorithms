#include <stdio.h>
#include <string.h>

int main(){

	char a[10000];
	scanf("%s",a);
	for (int i=0; i<strlen(a); i++){
		if (a[i]==122){
			a[i]=97;
		}
		else {
			a[i]++;	
		}
	}
	
	printf("%s",a);
	
}
