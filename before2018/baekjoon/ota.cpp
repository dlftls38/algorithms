#include <stdio.h>
#include <string.h>

int main() {
	
	int i,j,k,t,n;
	char word[80];
	
	scanf("%d",&t);
	
	for (i=0; i<t; i++){
		
		scanf ("%d%s",&n,word);
		k = strlen(word);
		for(j=0; j<k; j++){
			if (j==n-1){
			}
			else {
				
			printf("%c",word[j]);
			}
		}
		printf("\n");
		
	}
	
}
