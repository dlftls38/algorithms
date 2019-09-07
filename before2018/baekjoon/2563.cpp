#include <stdio.h>
int main(){
	int n;
	int i,j,k;
	int a[110][110]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		for(j=y;j<y+10;j++){
			for(k=x;k<x+10;k++){
				a[j][k]=1;
			}
		}
	}
	int sum=0;
	for(i=0;i<105;i++){
		for(j=0;j<105;j++){
			if(a[i][j]==1){
				sum++;
			}
		}
	}
	printf("%d",sum);
}
