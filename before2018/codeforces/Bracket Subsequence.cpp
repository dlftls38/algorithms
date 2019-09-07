#include <stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	char bracket[200001]={0};
	int stack[200001]={0};
	int stack_position[200001]={0};
	int answer[200001]={0};
	int top=0;
	int count=1;
	scanf("%s",bracket);
	for(int i=0;i<n;i++){
		if(bracket[i]=='('){
			stack_position[top]=i;
			stack[top++]=count++;
		}
		else{
			answer[stack_position[--top]]=stack[top];
			answer[i]=stack[top];
		}
	}
	for(int i=0;i<n;i++){
		if(answer[i]<=k/2){
			printf("%c",bracket[i]);
		}
	}
}
