#include <stdio.h>
int max,r,c;
int q[26];
char a[21][21]={0};
void dfs(int x, int y,int k){
	if(max<k){
		max=k;
	}
	q[a[x][y]-65]=1;
	if(x<=r-2 && q[a[x+1][y]-65]==0){
		dfs(x+1,y,k+1);
	}
	if(x>0 && q[a[x-1][y]-65]==0){
		dfs(x-1,y,k+1);
	}
	if(y<=c-2 && q[a[x][y+1]-65]==0){
		dfs(x,y+1,k+1);
	}
	if(y>0 && q[a[x][y-1]-65]==0){
		dfs(x,y-1,k+1);
	}
	q[a[x][y]-65]=0;
}
int main(){
	int i;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		scanf("%s",a[i]);
	}
	dfs(0,0,1);
	printf("%d",max);
}
