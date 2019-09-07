#include <stdio.h>
#include <string.h>

int main() {
	
	int i,k;
	int a=0;
	char word[1000];
	
	scanf("%s",word);
	k = strlen(word);
	
	for (i=0; i<k/2; i++){
			
		if (word[i]==word[k-1-i]){
				
			a+=1;
		}
	}
	if (a==k/2){
			
		printf("Yes");
	}
		
	else {
		
		printf("Nope");
	}
	
	
}
