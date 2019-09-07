#include <stdio.h>
#include <string.h>
int main(){
	
	int i,j;
	char k[150]={0};
	int r[150]={0};
	int c=1;
	int q=0;
	
	scanf("%s",k);
	
	for(i=0;i<strlen(k);i++){
		
		if(k[i]==')'){
			
			if(i==0 && q==0){
				
				printf("WRONG EXPRESSION");
				q=1;
				break;
			}
			r[i]=c;
			for(j=i-1;j>-1;j--){
				if(k[j]=='(' && r[j]==0){
					r[j]=c++;
					break;
				}
			}
		}
	}
	
	for(i=0;i<strlen(k);i++){
		
		if(r[i]==0 && q==0){
			
			printf("WRONG EXPRESSION");
			q=1;
			break;
		}
	}
	
	if(q==0){
		
		for(i=0;i<strlen(k);i++){
			
			printf("%d ",r[i]);
		}
	}
}
