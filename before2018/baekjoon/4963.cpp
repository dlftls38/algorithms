#include <stdio.h>
int i,j,z,maze[110][110],que[3000],que2[3000],head,head2,tail,tail2,c,w,h,check[110][110],x,y;

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
	
	
	while(1){
		
		scanf("%d%d",&w,&h);
			
		if(w==0 && h==0){
			
			break;
		}
		else{
			
			for(i=1;i<h+1;i++){
				
				for(j=1;j<w+1;j++){
					
					scanf("%d",&maze[i][j]);
				}
			}
			for(i=1;i<h+1;i++){
				
				for(j=1;j<w+1;j++){
					if(maze[i][j]==1 && check[i][j]==0){
					
						push(i);
						push2(j);
						for(z=0;z<w*h;z++){
							x=que2[head2];
							y=que[head];
							check[y][x]=1;
							if(head==tail){
								
								break;
							}
							if(maze[y+1][x]==1 && check[y+1][x]==0){
								check[y+1][x]=1;
								push(y+1);
								push2(x);
							}
							if(maze[y][x+1]==1 && check[y][x+1]==0){
								check[y][x+1]=1;
								push(y);
								push2(x+1);
							}
							if(maze[y][x-1]==1 && check[y][x-1]==0){
								check[y][x-1]=1;
								push(y);
								push2(x-1);
							}
							if(maze[y-1][x]==1 && check[y-1][x]==0){
								check[y-1][x]=1;
								push(y-1);
								push2(x);
							}
							if(maze[y-1][x-1]==1 && check[y-1][x-1]==0){
								check[y-1][x-1]=1;
								push(y-1);
								push2(x-1);
							}
							if(maze[y-1][x+1]==1 && check[y-1][x+1]==0){
								check[y-1][x+1]=1;
								push(y-1);
								push2(x+1);
							}
							if(maze[y+1][x+1]==1 && check[y+1][x+1]==0){
								check[y+1][x+1]=1;
								push(y+1);
								push2(x+1);
							}
							if(maze[y+1][x-1]==1 && check[y+1][x-1]==0){
								check[y+1][x-1]=1;
								push(y+1);
								push2(x-1);
							}
							pop();
							pop2();
						}
						c++;
					}
				}
			}
			tail=0;
			head=0;
			tail2=0;
			head2=0;
			printf("%d\n",c);
			c=0;
			for(i=1;i<h+1;i++){
					
				for(j=1;j<w+1;j++){
						
					maze[i][j]=0;
					check[i][j]=0;
				}
			}
			
		}
	}
}
