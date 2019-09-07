#include <stdio.h>
int check[102][102];
int a[102][102];
int min,signal;
int abs(int a,int b){
	if(a-b<0) return b-a;
	else return a-b;
}
void dfs(int x,int y){
	if(check[x+1][y]==1 && min>a[x+1][y]) min=a[x+1][y];
	if(check[x-1][y]==1 && min>a[x-1][y]) min=a[x-1][y];
	if(check[x][y-1]==1 && min>a[x][y-1]) min=a[x][y-1];
	if(check[x][y+1]==1 && min>a[x][y+1]) min=a[x][y+1];
	if(check[x+1][y]==1 && a[x][y]>=a[x+1][y]){
		check[x][y]=1;
		signal=1;
	}
	if(check[x-1][y]==1 && a[x][y]>=a[x-1][y]){
		check[x][y]=1;
		signal=1;
	}
	if(check[x][y+1]==1 && a[x][y]>=a[x][y+1]){
		check[x][y]=1;
		signal=1;
	}
	if(check[x][y-1]==1 && a[x][y]>=a[x][y-1]){
		check[x][y]=1;
		signal=1;
	}
}
int main(){
	int i,j,answer=0,n,m;
	scanf("%d%d",&n,&m);
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<n+1;i++){
		check[i][m]=1;
		check[i][1]=1;
	}
	for(i=1;i<m+1;i++){
		check[1][i]=1;
		check[n][i]=1;
	}
	int q1[10001]={0};
	int q2[10001]={0};
	int tail=0;
	for(i=2;i<n;i++){
		for(j=2;j<m;j++){
			q1[tail]=i;
			q2[tail++]=j;
		}
	}
	while(1){
		min=10001;
		int tail2=0;
		for(i=0;i<tail;i++){
			signal=0;
			dfs(q1[i],q2[i]);
			if(signal==0){
				q1[tail2]=q1[i];
				q2[tail2++]=q2[i];
				//printf("%d %d\n",q1[tail2-1],q2[tail2-1]);
			}
		}
		tail=tail2;
		for(i=0;i<tail;i++){
			if(a[q1[i]][q2[i]]<min){
				answer+=min-a[q1[i]][q2[i]];
				a[q1[i]][q2[i]]=min;
			}
		}
		//break;
		if(tail==0) break;
	}
	printf("%d", answer);
}
