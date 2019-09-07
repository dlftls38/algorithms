#include <stdio.h>
int result[101],a[101][101],check[101][101],count[10000];
int queue[100000],head,tail,n,r;
void bfs(int now,int con){
	if(result[now]==0){
		result[now]=con*2;
	}
	else{
		if(result[now]>con*2){
			result[now]=con*2;
		}
	}
	con++;
	for(int i=2;i<n+1;i++){
		if(a[now][i]==1 && check[now][i]==0){
			count[tail]=con;
			queue[tail++]=i;
			check[now][i]=1;
			check[i][now]=1;
		}
	}
	head++;
	if(tail!=head){
		bfs(queue[head],count[head]);	
	}
}
int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int x,y;
		scanf("%d%d",&n,&r);
		for(i=0;i<101;i++){
			for(j=0;j<101;j++){
				a[i][j]=0;
				check[i][j]=0;
				result[i]=0;
				count[i]=0;
			}
		}
		tail=0;
		head=0;
		for(i=0;i<r;i++){
			scanf("%d%d",&x,&y);
			a[x][y]=1;
			a[y][x]=1;
		}
		tail++;
		bfs(1,0);
		int max=0;
		for(i=2;i<n+1;i++){
			max+=result[i];
		}
		printf("%d\n",max);
	}
}
