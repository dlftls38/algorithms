#include <stdio.h>

int n;
int road[1100][1100];
int visit[1100];
int visit2[1100];
int queue[1100];
int head,tail;

void queue_push(int a){
	
	queue[tail++] = a;
}

void queue_pop(){
	
	queue[head++] = 0;
}

void dfs(int a){
	int i;
	visit[a] = 1;
	for(i=1;i<n+1;i++){
		
		if(a != i && visit[i]==0 && road[a][i]==1){
			
			visit[i]=1;
			printf("%d ",i);
			dfs(i);
		}
	}
}

void bfs(int a){
	int i;
	visit2[a] = 1;
	for(i=1;i<n+1;i++){
		
		if(a != i && visit2[i]==0 && road[a][i]==1){
		
			visit2[i]=1;
			printf("%d ",i);
			queue_push(i);
		}
	}
	queue_pop();
	if(tail==head){
		
	}
	else{
		bfs(queue[head]);
	}
}

int main(){
	
	int m,v;
	int i,j;
	int z,zz;
	
	scanf("%d%d%d",&n,&m,&v);
	
	for(i=0;i<m;i++){
		
		scanf("%d%d",&z,&zz);
		road[z][zz]=1;
		road[zz][z]=1;
	}
	printf("%d ",v);
	dfs(v);
	printf("\n");
	queue_push(v);
	printf("%d ",v);
	bfs(v);
}
