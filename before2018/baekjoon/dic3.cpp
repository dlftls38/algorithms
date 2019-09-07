#include <stdio.h>
#include <string.h>

	char a[1005][1005];
	int i,j,n;
	int k=0;
int main(){
	
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		
		scanf("%s",a[i]);
	}
	
	for (i=0; i<n; i++){
		
		for (j=0; j<n; j++){
			
			if (strcmp(a[i],a[j])<0 || strcmp(a[i],a[j])==0){
				
				k+=1;
			}
		}
		if (k==n){
			
			printf("%s",a[i]);
			break;
		}
		k=0;
	}
	
	
}
