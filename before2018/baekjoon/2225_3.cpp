#include <stdio.h>
int main(){
	int n,k,i,j;
	long long a[201][201]={0};
	scanf("%d%d",&n,&k);
	for(i=0;i<201;i++) a[0][i]=1,a[i][0]=1;
	for(i=1;i<201;i++){
		for(j=1;j<201;j++){
			a[i][j]=a[i][j-1]%1000000000+a[i-1][j]%1000000000;
			a[i][j]%=1000000000;
		}
	}
	printf("%lld",a[n][k-1]%1000000000);
}
