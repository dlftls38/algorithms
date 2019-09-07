#include <stdio.h>
int map[126][126];
int answer[126][126];
int queue[100000];
int queue2[100000];
int tail;
int head;
void flood(int n,int x,int y){
	head++;
	if(y+1<n && map[x][y+1]+answer[x][y]<answer[x][y+1]){
		answer[x][y+1]=map[x][y+1]+answer[x][y];
		queue[tail]=x;
		queue2[tail++]=y+1;
	}
	if(y-1>-1 && map[x][y-1]+answer[x][y]<answer[x][y-1]){
		answer[x][y-1]=map[x][y-1]+answer[x][y];
		queue[tail]=x;
		queue2[tail++]=y-1;
	}
	if(x-1>-1 && map[x-1][y]+answer[x][y]<answer[x-1][y]){
		answer[x-1][y]=map[x-1][y]+answer[x][y];
		queue[tail]=x-1;
		queue2[tail++]=y;
	}
	if(x+1<n && map[x+1][y]+answer[x][y]<answer[x+1][y]){
		answer[x+1][y]=map[x+1][y]+answer[x][y];
		queue[tail]=x+1;
		queue2[tail++]=y;
	}
	if(tail!=head){
		flood(n,queue[head],queue2[head]);
	}
}
int main(){
	int count=1;
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				int x;
				scanf("%d",&x);
				map[i][j]=x;
				answer[i][j]=100000;
			}
		}
		answer[0][0]=map[0][0];
		tail=0;
		head=0;
		queue[tail]=0;
		queue2[tail++]=0;
		flood(n,0,0);
		printf("Problem %d: %d\n",count,answer[n-1][n-1]);
		count++;
	}
}
