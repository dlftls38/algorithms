#include <stdio.h>
#include <string.h>

char password[1001000];
char password2[1001000];
char password3[1001000];
int top;
int top2;

void push(char a){
	
	password2[top++] = a;
}

void pop(){
	
	if(top==0){
		
	}
	else{
		
		password2[--top]=0;
	}
}

void push2(char a){
	
	password3[top2++] = a;
}

void pop2(){
	
	if(top2==0){
		
	}
	else{
		
		password3[--top2]=0;
	}
}
int main(){
	
	int t,i,j,len,len2;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",password);
		len = strlen(password);
		for(j=0;j<len;j++){
			if(password[j]=='-'){
				
				pop();
			}
			else if(password[j]=='<'){
				
				if(top==0){
					
				}
				else{
					push2(password2[top-1]);
					pop();
				}
			}
			else if(password[j]=='>'){
				if(password3[top2-1]==0){
						
				}
				else{
					
					push(password3[top2-1]);
					pop2();
				}
			}
			else{
				
				push(password[j]);
			}
		}
		len2 = strlen(password3);
		for(j=0;j<len2;j++){
			
			push(password3[top2-1]);
			pop2();
		}
		printf("%s\n",password2);
		top=0;
		top2=0;
		memset(password,0,sizeof(char)*1001000);
		memset(password2,0,sizeof(char)*1001000);
		memset(password3,0,sizeof(char)*1001000);
	}
}
