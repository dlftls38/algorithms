#include <stdio.h>
char sample[110][110];
int n,m,i,j,maze[110][110],que[110],que2[110],head,head2,tail,tail2;

void push(int a){
	
	que[tail++] = a;
}

void pop(){
	
	que[head++] = 0;
}
void push2(int a){
	
	que2[tail2++] = a;
}

void pop2(){
	
	que2[head2++] = 0;
}
int main(){
	
	int count=0;
	scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++){
		
		scanf("%s",sample[i]);
	}
	for(i=1;i<n+1;i++){
		
		for(j=1;j<m+1;j++){
			
			if(sample[i-1][j-1]=='1'){
				
				maze[i][j]=1;
				count++;
			}
			else{
				
				maze[i][j]=0;
			}
		}
	}
	push(1);
	push2(1);
	for(i=0;i<count+20;i++){
		
		if(tail-head==0){
			
			break;
		}
		if(maze[que[head]+1][que2[head2]]==1){
			
			maze[que[head]+1][que2[head2]] = maze[que[head]][que2[head2]]+1;
			push(que[head]+1);
			push2(que2[head2]);
		}
		if(maze[que[head]][que2[head2]+1]==1){
			
			maze[que[head]][que2[head2]+1] = maze[que[head]][que2[head2]]+1;
			push(que[head]);
			push2(que2[head2]+1);
		}
		if(maze[que[head]][que2[head2]-1]==1){
			
			maze[que[head]][que2[head2]-1] = maze[que[head]][que2[head2]]+1;
			push(que[head]);
			push2(que2[head2]-1);
		}
		if(maze[que[head]-1][que2[head2]]==1){
			
			maze[que[head]-1][que2[head2]] = maze[que[head]][que2[head2]]+1;
			push(que[head]-1);
			push2(que2[head2]);
		}
		pop();
		pop2();
	}
	printf("%d",maze[n][m]);
}
