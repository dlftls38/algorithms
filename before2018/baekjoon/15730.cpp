#include <stdio.h>
int check[102][102];
int a[102][102];
int q1[10001], q2[10001];
int tail,min,n,m;
int err;
int abs(int a,int b){
	if(a-b<0)return b-a;
	else return a-b;
}
void fill(int x,int y,int check2[102][102]){
	if(check2[x-1][y]==0 && a[x][y]<a[x-1][y] && a[x-1][y]<min) min=a[x-1][y];
	if(check2[x+1][y]==0 && a[x][y]<a[x+1][y] && a[x+1][y]<min) min=a[x+1][y];
	if(check2[x][y-1]==0 && a[x][y]<a[x][y-1] && a[x][y-1]<min) min=a[x][y-1];
	if(check2[x][y+1]==0 && a[x][y]<a[x][y+1] && a[x][y+1]<min) min=a[x][y+1];
}
int confirm(int x,int y){
	int p=0;
	if(a[x][y]<a[x-1][y]) p=1;
	if(a[x][y]<a[x+1][y]) p=1;
	if(a[x][y]<a[x][y-1]) p=1;
	if(a[x][y]<a[x][y+1]) p=1;
	return p;
}
void bfs(int x,int y,int check2[102][102]){
	if(check[x][y]==1 || x==n || y==m || x==1 || y==1){
		check[x][y]=1;
	}
	else{
		check[x][y]=1;
		if(confirm(x,y)==1){
			//printf("@ %d %d @\n",x,y);
			if((a[x+1][y]<=a[x][y] && x+1==n) || (a[x-1][y]<=a[x][y] && x-1==1) || (a[x][y+1]<=a[x][y] && y+1==m) || (a[x][y-1]<=a[x][y] && y-1==1)){
				err=1;
				return;
			}
			check2[x][y]=1;
			bfs(x+1,y,check2);
			bfs(x-1,y,check2);
			bfs(x,y+1,check2);
			bfs(x,y-1,check2);
			fill(x,y,check2);
			q1[tail]=x;
			q2[tail++]=y;	
		}
	}
}
int main(){
	int i,j,k,answer=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			int check2[102][102]={0};
			tail=0;
			min=10001;
			err=0;
			bfs(i,j,check2);
			if(err==1) tail=0;
			for(k=0;k<tail;k++){
				//printf("! %d %d   %d!\n",q1[k],q2[k],min);
				if(a[q1[k]][q2[k]]<min){
					answer+=abs(a[q1[k]][q2[k]],min);
					a[q1[k]][q2[k]]=min;
				}
			}
			//printf("@@\n");
		}
	}
	printf("%d",answer);
}
