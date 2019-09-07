#include <stdio.h>
int a[1002][1002];
void gogo(int y,int x,int way,int count){
	if(count!=0 && a[y][x]>0){
		printf("%d ",a[y][x]);
		return;
	}
	if(way==4 && a[y][x]!=0) gogo(y,x+1,4,count+1);
	else if(way==4 && a[y][x]==0) gogo(y-1,x,2,count+1);
	else if(way==2 && a[y][x]!=0) gogo(y-1,x,2,count+1);
	else if(way==2 && a[y][x]==0) gogo(y,x+1,4,count+1);
	else if(way==6 && a[y][x]!=0) gogo(y,x-1,6,count+1);
	else if(way==6 && a[y][x]==0) gogo(y+1,x,8,count+1);
	else if(way==8 && a[y][x]!=0) gogo(y+1,x,8,count+1);
	else if(way==8 && a[y][x]==0) gogo(y,x-1,6,count+1);
}
int main(){
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			scanf("%d",&k);
			a[i][j]=k-1;
		}
	}
	k=1;
	for(i=1;i<n+1;i++) a[i][0]=k++;
	for(i=1;i<m+1;i++) a[n+1][i]=k++;
	for(i=n;i>0;i--) a[i][m+1]=k++;
	for(i=m;i>0;i--) a[0][i]=k++;
	for(i=1;i<n+1;i++) gogo(i,0,4,0);
	for(i=1;i<m+1;i++) gogo(n+1,i,2,0);
	for(i=n;i>0;i--) gogo(i,m+1,6,0);
	for(i=m;i>0;i--) gogo(0,i,8,0);
}
