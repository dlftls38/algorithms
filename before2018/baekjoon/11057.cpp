#include <stdio.h>
#define M 10007
int main(){
	int i,j,k,n,a[1000][10]={0},count=0;
	scanf("%d",&n);
	for(i=0;i<10;i++) a[0][i]=1;
	for(i=0;i<n-1;i++){
		for(j=0;j<10;j++){
			for(k=j;k<10;k++){
				a[i+1][k]+=a[i][j];
			}
			a[i+1][j]%=M;
		}
	}
	for(i=0;i<10;i++){
		count+=a[n-1][i]%M;
	}
	printf("%d",count%M);
}
