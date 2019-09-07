#include <stdio.h>
int main(){
	unsigned long long count=0,a[100][10]={0};
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<10;i++) a[0][i]=1;
	for(i=1;i<n;i++){
		for(j=0;j<10;j++){
			if(j==0) a[i][j]=a[i-1][j+1]%1000000000;
			else if(j==9) a[i][j]=a[i-1][j-1]%1000000000;
			else {
				a[i][j]=(a[i-1][j+1]+a[i-1][j-1])%1000000000;
			}
		}
	}
	for(i=0;i<10;i++){
		count+=a[n-1][i];
	}
	printf("%llu",count%1000000000);
}
