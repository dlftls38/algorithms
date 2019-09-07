#include <stdio.h>
#include <string.h>

char password[1001000];
char password2[1001000];
int top;
int realtop;
int realreal;

void push(char a){
	
	password2[top++] = a;
	realtop++;
}

void pop(){
	
	if(top==0){
		
	}
	else{
		
		password2[--top]=0;
		realtop--;
	}
}

int main(){
	
	int t,i,j,len;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",password);
		len = strlen(password);
		for(j=0;j<strlen(password);j++){
			if(password[j]=='-'){
				
				pop();
			}
			else if(password[j]=='<'){
				
				if(top==0){
					
				}
				else{
					
					top--;
				}
			}
			else if(password[j]=='>'){
				
				if(password2[top]==0){
					
				}
				else{
					
					top++;
				}
			}
			else{
				
				if(password2[top] != 0){
					realreal = realtop;
					while(password2[top]!=0){
						password2[realtop]=password2[realtop-1];
						realtop--;
						password2[realtop]=0;
					}
					realtop=realreal;
				}
				else{
					
				}
				push(password[j]);
			}
		}
		printf("%s\n",password2);
		top=0;
		realtop=0;
		realreal=0;
		for(j=0;j<strlen(password);j++){
			
			password[j]=0;
			password2[j]=0;
		}
	}
}
