#include <stdio.h>

int main(){
	
	char a[200];
	int i;
	scanf("%s",a);
	
	for(i=1;i<101;i++){
		
		if(a[i-1]==0){
			
			break;
		}
		else{
			printf("%c",a[i-1]);
			if(i%10==0){
				
				printf("\n");
			}
		}
	}
}
