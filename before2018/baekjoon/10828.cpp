#include <stdio.h>
int top,n,i,j,k;
char stack[15000][10];
int stack2[15000];
void push(int a){
	
	stack2[top++] = a;
}

int pop(){
	if(top==0 && stack2[top]==0){
		
		return -1;
	}
	int a=stack2[--top];
	stack2[top]=0;
	return a;
}
int main(){
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		scanf("%s",stack[i]);
		if(stack[i][1]=='u'){
			
			scanf("%d",&k);
			push(k);
		}
		else if(stack[i][1]=='o' && stack[i][0]=='p'){
			
			printf("%d\n",pop());
		}
		else if(stack[i][1]=='i'){
			
			printf("%d\n",top);
		}
		else if(stack[i][1]=='m'){
			
			if(top==0){
				
				printf("1\n");
			}
			else{
				
				printf("0\n");
			}
		}
		else if(stack[i][1]=='o' && stack[i][0]=='t'){
			if(top==0){
				
				printf("-1\n");
			}
			else{
				
				printf("%d\n",stack2[top-1]);
			}
		}
		
	}
}
