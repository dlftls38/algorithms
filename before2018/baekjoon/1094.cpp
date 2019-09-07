#include <stdio.h>

int stack[30],top;

void push(int a){
	
	stack[top++] = a;
}

void pop(){
	if(top==0){
		
	}
	else{
		
		stack[--top] = 0;
	}
}
int main(){
	
	int x,i;
	int sum;
	
	scanf("%d",&x);
	
	push(64);
	while(1){
		
		sum=0;
		for(i=0;i<top;i++){
			
			sum+=stack[i];
		}
		if(sum>x){
			
			stack[top-1] = stack[top-1]/2;
			push(stack[top-1]);
		}
		else{
			break;
		}
		sum=0;
		for(i=0;i<top-1;i++){
			
			sum+=stack[i];
		}
		if(sum>x){
			
			pop();
		}
		else if(sum<x){
			
			continue;
		}
		else{
			pop();
			break;
		}
	}
	printf("%d",top);
}
