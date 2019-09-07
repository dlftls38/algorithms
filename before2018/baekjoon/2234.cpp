#include <stdio.h>
int n,m,a[101][101],i,j,k,wall[50000],wall2[50000],top,max,check[101][101],count,queue[50000],queue2[50000],head,tail,room;
void bfs(int q,int w){
	if(q%2==1 && w%2==1) count++;
	if(q+1>=1 && q+1<=2*n-1 && w>=1 && w<=2*m-1 && a[q+1][w]==0 && check[q+1][w]==0) check[q+1][w]=1,queue[tail]=q+1,queue2[tail++]=w;
	if(q-1>=1 && q-1<=2*n-1 && w>=1 && w<=2*m-1 && a[q-1][w]==0 && check[q-1][w]==0) check[q-1][w]=1,queue[tail]=q-1,queue2[tail++]=w;
	if(q>=1 && q<=2*n-1 && w+1>=1 && w+1<=2*m-1 && a[q][w+1]==0 && check[q][w+1]==0) check[q][w+1]=1,queue[tail]=q,queue2[tail++]=w+1;
	if(q>=1 && q<=2*n-1 && w-1>=1 && w-1<=2*m-1 && a[q][w-1]==0 && check[q][w-1]==0) check[q][w-1]=1,queue[tail]=q,queue2[tail++]=w-1;
	queue[head]=0;
	queue2[head++]=0;
	if(tail!=head) bfs(queue[head],queue2[head]);
}
int main(){
	scanf("%d%d",&m,&n);
	for(i=0;i<=2*n;i++) a[i][0]=1;
	for(i=0;i<=2*n;i++) a[i][2*m]=1;
	for(i=0;i<=2*m;i++) a[0][i]=1;
	for(i=0;i<=2*m;i++) a[2*n][i]=1;
	for(i=2;i<=2*n-2;i+=2) for(j=2;j<=2*m-2;j+=2) a[i][j]=1;
	for(i=1;i<=2*n-1;i+=2) {
		for(j=1;j<=2*m-1;j+=2){
			scanf("%d",&k);
			if(k-8>=0){
				a[i+1][j]=1,k-=8;
				if(i+1>=1 && i+1<=2*n-1 && j>=1 && j<=2*m-1) wall[top]=i+1,wall2[top++]=j;
			}
			if(k-4>=0){
				a[i][j+1]=1,k-=4;
				if(i>=1 && i<=2*n-1 && j+1>=1 && j+1<=2*m-1) wall[top]=i,wall2[top++]=j+1;
			}
			if(k-2>=0){
				a[i-1][j]=1,k-=2;
				if(i-1>=1 && i-1<=2*n-1 && j>=1 && j<=2*m-1) wall[top]=i-1,wall2[top++]=j;
			}
			if(k-1>=0){
				a[i][j-1]=1,k-=1;
				if(i>=1 && i<=2*n-1 && j-1>=1 && j-1<=2*m-1) wall[top]=i,wall2[top++]=j-1;
				
			}
		}
	}
	for(i=1;i<=2*n-1;i+=2) {
		for(j=1;j<=2*m-1;j+=2){
			if(a[i][j]==0 && check[i][j]==0) room++,queue[tail]=i,queue2[tail++]=j,check[i][j]=1,bfs(i,j);
			if(count>max) max=count;
			count=0;
			tail=0;
			head=0;
		}
	}
	printf("%d\n%d\n",room,max);
	max=0;
	for(i=0;i<top;i++) {
		for(k=1;k<=2*n-1;k++) for(j=1;j<=2*m-1;j++) check[k][j]=0;
		a[wall[i]][wall2[i]]=0;
		queue[tail]=wall[i],queue2[tail++]=wall2[i],check[wall[i]][wall2[i]]=1,bfs(wall[i],wall2[i]);
		if(count>max) max=count;
		count=0;
		tail=0;
		head=0;
		a[wall[i]][wall2[i]]=1;
	}
	printf("%d",max);
}
