#include <stdio.h>
#include <string.h>

char a[100];
int b[100];

int main(){
	
	scanf("%s",a);
	int i,j,n;
	int k=1;
	int l = strlen(a);
	int d = strlen(a);
	int m=0;
	
	for(j=0;j<d;j++){
	
		for(i=0; i<d;i++){
			if(a[i]==41){
			
				for(n=i-1;n>-1;n--){
					
					if(a[n]==40){
				
						a[i]=0;
						a[n]=0;
						b[i]=k;
						b[n]=k;
						k++;
						break;
					}
				}
			}
		}
	}
	
	for(i=0;i<l;i++){
		
		if(b[i]==0){
			
			printf("WRONG EXPRESSION ");
			m=1;
			break;
		}
	}
	if(m !=1){
		
		
	
	for(i=0;i<l;i++){
			
		printf("%d ",b[i]);
	}
}
	
	
}
