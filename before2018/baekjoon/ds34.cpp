#include <stdio.h>
#include <string.h>
int main(){
	
	int i,j;
	char k[1100]={0};
	int r[1100]={0};
	int c=1;
	int q=0;
	
	scanf("%s",k);
	
	for(i=0;i<strlen(k);i++){
		if(q==1){
			break;
		}
		if(k[i]==')'){
			
			if(i==0){
				
				printf("NO");
				q=1;
				break;
			}
			r[i]=c;
			for(j=i-1;j>-1;j--){
				if(k[j]=='(' && r[j]==0){
					r[j]=c;
					break;
				}
				else if(r[j]==1){
				}
				else{
					
					printf("NO");
					q=1;
					break;
				}
			}
		}
		if(k[i]=='}'){
			
			if(i==0){
				
				printf("NO");
				q=1;
				break;
			}
			r[i]=c;
			for(j=i-1;j>-1;j--){
				if(k[j]=='{' && r[j]==0){
					r[j]=c;
					break;
				}
				else if (r[j]==1){
				}
				else{
					
					printf("NO");
					q=1;
					break;
				}
			}
		}
		if(k[i]==']'){
			
			if(i==0){
				
				printf("NO");
				q=1;
				break;
			}
			r[i]=c;
			for(j=i-1;j>-1;j--){
				if(k[j]=='[' && r[j]==0){
					r[j]=c;
					break;
				}
				else if (r[j]==1){
				}
				else{
					
					printf("NO");
					q=1;
					break;
				}
			}
		}
	}
	if(q==0){
		printf("YES");
	}
}
