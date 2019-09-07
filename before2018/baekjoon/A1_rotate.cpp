#include <stdio.h>
int a[1001][1001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=n-1;j>-1;j--){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
