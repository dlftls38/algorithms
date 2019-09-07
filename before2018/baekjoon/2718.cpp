#include <stdio.h>
int n;
int sum;
void recur(int a[5][1000],int i,int j,int count){
	/*printf("i=%d j=%d  count=%d\n",i,j,count);
	for(int k=0;k<4;k++){
		for(int l=0;l<2;l++){
			printf("%d ",a[k][l]);
		}
		printf("\n");
	}*/
	if(i==4){
		return;
	}
	if(j==n){
		recur(a,i+1,0,count);
		return;
	}
	if((i>0 && a[i-1][j]==0)){
		//printf("@@\n");
		return;
	}
	if(count==4*n){
		sum++;
		return;
	}
	if(a[i][j]==0 && a[i][j+1]==0 && j+1<n){
		a[i][j]=1;
		a[i][j+1]=1;
		recur(a,i,j+1,count+2);
		a[i][j]=0;
		a[i][j+1]=0;
	}
	if(a[i][j]==0 && a[i+1][j]==0 && i+1<4){
		a[i][j]=1;
		a[i+1][j]=1;
		recur(a,i,j+1,count+2);
		a[i][j]=0;
		a[i+1][j]=0;
	}
	recur(a,i,j+1,count);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		sum=0;
		int a[5][1000]={0};
		recur(a,0,0,0);
		printf("! %d !\n",sum);
	}
}
