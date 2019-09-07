#include <stdio.h>
int n,m,i,j,a[1002][1002],check[1002][1002],check2[1002][1002],q[1500000],q2[1500000],q3[1500000],q4[1500000],tail,head,result;
char list[1001];
void bfs(int x,int y,int z,int k){
	if(x==n && y==m && result==0) result=k;
	if(x==n && y==m && result>k) result=k;
	if(z==0){
		if(x+1>=1 && x+1<=n && y>=1 && y<=m && check[x+1][y]==0 && a[x+1][y]==0) check[x+1][y]=1,q[tail]=x+1,q2[tail]=y,q3[tail]=0,q4[tail++]=k+1;
		if(x-1>=1 && x-1<=n && y>=1 && y<=m && check[x-1][y]==0 && a[x-1][y]==0) check[x-1][y]=1,q[tail]=x-1,q2[tail]=y,q3[tail]=0,q4[tail++]=k+1;
		if(x>=1 && x<=n && y+1>=1 && y+1<=m && check[x][y+1]==0 && a[x][y+1]==0) check[x][y+1]=1,q[tail]=x,q2[tail]=y+1,q3[tail]=0,q4[tail++]=k+1;
		if(x>=1 && x<=n && y-1>=1 && y-1<=m && check[x][y-1]==0 && a[x][y-1]==0) check[x][y-1]=1,q[tail]=x,q2[tail]=y-1,q3[tail]=0,q4[tail++]=k+1;
		if(x+1>=1 && x+1<=n && y>=1 && y<=m && check[x+1][y]==0 && a[x+1][y]==1 && z==0) check[x+1][y]=1,q[tail]=x+1,q2[tail]=y,q3[tail]=1,q4[tail++]=k+1;
		if(x-1>=1 && x-1<=n && y>=1 && y<=m && check[x-1][y]==0 && a[x-1][y]==1 && z==0) check[x-1][y]=1,q[tail]=x-1,q2[tail]=y,q3[tail]=1,q4[tail++]=k+1;
		if(x>=1 && x<=n && y+1>=1 && y+1<=m && check[x][y+1]==0 && a[x][y+1]==1 && z==0) check[x][y+1]=1,q[tail]=x,q2[tail]=y+1,q3[tail]=1,q4[tail++]=k+1;
		if(x>=1 && x<=n && y-1>=1 && y-1<=m && check[x][y-1]==0 && a[x][y-1]==1 && z==0) check[x][y-1]=1,q[tail]=x,q2[tail]=y-1,q3[tail]=1,q4[tail++]=k+1;
	}
	else{
		if(x+1>=1 && x+1<=n && y>=1 && y<=m && check2[x+1][y]==0 && a[x+1][y]==0) check2[x+1][y]=1,q[tail]=x+1,q2[tail]=y,q3[tail]=1,q4[tail++]=k+1;
		if(x-1>=1 && x-1<=n && y>=1 && y<=m && check2[x-1][y]==0 && a[x-1][y]==0) check2[x-1][y]=1,q[tail]=x-1,q2[tail]=y,q3[tail]=1,q4[tail++]=k+1;
		if(x>=1 && x<=n && y+1>=1 && y+1<=m && check2[x][y+1]==0 && a[x][y+1]==0) check2[x][y+1]=1,q[tail]=x,q2[tail]=y+1,q3[tail]=1,q4[tail++]=k+1;
		if(x>=1 && x<=n && y-1>=1 && y-1<=m && check2[x][y-1]==0 && a[x][y-1]==0) check2[x][y-1]=1,q[tail]=x,q2[tail]=y-1,q3[tail]=1,q4[tail++]=k+1;
	}
	head++;
	if(head!=tail) bfs(q[head],q2[head],q3[head],q4[head]);
}
int main(){
	scanf("%d%d",&n,&m);
	for(i=1;i<n+1;i++){
		scanf("%s",list);
		for(j=1;j<m+1;j++) a[i][j]=list[j-1]-48;
	}
	check[1][1]=1;
	q[tail]=1;
	q2[tail]=1;
	q3[tail]=0;
	q4[tail++]=1;
	bfs(1,1,0,1);
	if(result>0) printf("%d",result);
	else printf("-1");
}
