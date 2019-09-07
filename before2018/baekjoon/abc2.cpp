#include <stdio.h>
#include <string.h>

int main() {
	
	int n;
	int k;
	int k2;
	int i;
	int j;
	int p=0;
	int result=0;
	char alphabat[1000];
	char check[1000];
	
	scanf("%d%s%s",&n,alphabat,check);
	k = strlen(alphabat);
	k2 = strlen(check);
	
	for (i=0; i<k; i++){
		
		for (j=0; j<k2; j++){
			
			if (alphabat[j+i]==check[j]){
				
				p+=1;
			}
		}
		if (p==k2){
				
			result+=1;
		}
		p=0;
	}
	
	if (result>0){
		printf("Yes");
	}
	else {
		printf("No");
	}
	
	
	
}
