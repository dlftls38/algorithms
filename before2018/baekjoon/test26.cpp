#include <stdio.h>

int vertex,edge,start,graph[1001][1001],a,b,trace[1000],count;

void dfs(int go){
	for (int i=1;i<=vertex;i++){
		if (graph[go][i]==1){
			trace[count++]=go*10+i;
			graph[go][i]=0;
			graph[i][go]=0;
			dfs(i);
		}
	}
}

int main(){
	scanf("%d %d %d",&vertex,&edge,&start);
	for (int i=0 ; i<edge ; i++){
		scanf("%d %d",&a,&b);
		graph[a][b]=1;
	}
	dfs(start);
	for (int i=0;i<count+10;i++){
		printf("%d ",trace[i]);
	}
}
