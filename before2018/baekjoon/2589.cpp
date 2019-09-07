#include <stdio.h>
char a[60][60];
int max;
int q[6000];
int q2[6000];
int q3[6000];
int top;
int head;
void gogo(int x,int y,int count,int check[60][60]){
	if(count>max){
		max=count;
	}
	if(a[x][y+1]=='L' && check[x][y+1]==0){
		check[x][y+1]=1;
		q[top]=x;
		q3[top]=q3[head]+1;
		q2[top++]=y+1;
	}
	if(a[x][y-1]=='L' && check[x][y-1]==0){
		check[x][y-1]=1;
		q[top]=x;
		q3[top]=q3[head]+1;
		q2[top++]=y-1;
	}
	if(a[x+1][y]=='L' && check[x+1][y]==0){
		check[x+1][y]=1;
		q[top]=x+1;
		q3[top]=q3[head]+1;
		q2[top++]=y;
	}
	if(a[x-1][y]=='L' && check[x-1][y]==0){
		check[x-1][y]=1;
		q[top]=x-1;
		q3[top]=q3[head]+1;
		q2[top++]=y;
	}
	head++;
	if(top!=head){
		gogo(q[head],q2[head],q3[head],check);
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k,l;
	for(i=1;i<n+1;i++){
		scanf("%s",a[i]);
	}
	for(i=1;i<n+1;i++){
		for(j=m;j>-1;j--){
			a[i][j]=a[i][j-1];
		}
		a[i][0]=0;
	}
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			if(a[i][j]=='L'){
				top=0;
				head=0;
				int some[60][60]={0};
				some[i][j]=1;
				top++;
				gogo(i,j,0,some);
			}
		}
	}
	printf("%d",max);
}
