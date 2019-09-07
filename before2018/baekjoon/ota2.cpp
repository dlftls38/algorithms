#include <stdio.h>
#include <string.h>

int main() {
	
	int i,j,k,t,n,s,nn[80],q;
	char word[80];
	int a=0;
	
	scanf("%d",&t);
	
	for (i=0; i<t; i++){
		
		scanf ("%d",&n);
		
		for (j=0; j<n; j++){
			
			scanf("%d",&nn[j]);
		}
		
		scanf("%s",word);
		k = strlen(word);
		for(j=0; j<k; j++){
			for (q=0; q<n; q++){
				
				if (nn[q]-1==j){
					s+=1;
				}
			}
			if (s>0){
				
			}
			else {
				printf("%c",word[j]);
			}
			s=0;
		}
		printf("\n");
		a=0;
		for (j=0; j<n; j++){
			
			nn[j]=0;
		}
		
		
	}
	
}
