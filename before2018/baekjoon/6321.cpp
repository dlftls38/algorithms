#include <stdio.h>
#include <string.h>

char a[10000][60];

int main(){
	
	int n,i,j,len;
		
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		scanf("%s",a[i]);
	}
	
	for(i=0;i<n;i++){
		
		len = strlen(a[i]);
		printf("String #%d\n",i+1);
		for(j=0;j<len;j++){
			
			if(a[i][j]=='Z'){
				
				printf("A");
			}
			else{
				
				printf("%c",a[i][j]+1);
			}
			
		}
		printf("\n\n");
	}
	
	
}
