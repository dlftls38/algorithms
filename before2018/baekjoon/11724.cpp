#include <stdio.h>
int connect[1001][1001],check[1001][1001],j,count,n,queue[500000],head,tail,hm[1001];
void bfs(int a){
	for(j=1;j<n+1;j++){
		if(connect[a][j]==1 && check[a][j]==0){
			hm[a]=1;
			hm[j]=1;
			check[a][j]=1;
			check[j][a]=1;
			count++;
			queue[tail++]=j;
		}
	}
	queue[head++]=0;
	if(tail!=head) bfs(queue[head]);
}
int main(){
	int i,m,u,v,real=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d%d",&u,&v);
		connect[u][v]=1;
		connect[v][u]=1;
	}
	for(i=1;i<n+1;i++){
		queue[tail++]=i;
		bfs(i);
		if(count>0){
			count=0;
			real++;
		}
		head=0;
		tail=0;
	}
	for(i=1;i<n+1;i++){
		if(hm[i]==0) real++;
	}
	printf("%d",real);
}
