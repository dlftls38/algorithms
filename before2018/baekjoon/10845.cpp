#include <stdio.h>

int queue[10100],head,tail;
char chch[10100][10];

void push(int a){
	
	queue[tail++] = a;
}

int pop(){
	if(queue[head]==0){
		
		return -1;
	}
	int k;
	k = queue[head];
	queue[head++] = 0;
	return k;
}

int main(){
	
	int n,i,j,k;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		scanf("%s",&chch[i]);
		if(chch[i][0]=='p' && chch[i][1]=='u'){
			
			scanf("%d",&k);
			push(k);
		}
		else if(chch[i][0]=='p' && chch[i][1]=='o'){
			
			j = pop();
			printf("%d\n",j);
		}
		else if(chch[i][0]=='s'){
			
			printf("%d\n",tail-head);
		}
		else if(chch[i][0]=='e'){
			
			if(tail-head==0){
				
				printf("1\n");
			}
			else{
				
				printf("0\n");
			}
		}
		else if(chch[i][0]=='f'){
			
			if(tail-head==0){
				
				printf("-1\n");
			}
			
			else{
				
				printf("%d\n",queue[head]);
			}
		}
		else{
			
			if(tail-head==0){
				
				printf("-1\n");
			}
			
			else{
				
				printf("%d\n",queue[tail-1]);
			}		
		}
	}
}
