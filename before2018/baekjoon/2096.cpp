#include <stdio.h>
int a[100000][3],b[100000][3];
int main(){
	int n,i,j,k,max=0,min=1000000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<n-1;i++){
		if(a[i][0]+a[i+1][0]>a[i][1]+a[i+1][0]) a[i+1][0]=a[i][0]+a[i+1][0];
		else a[i+1][0]=a[i][1]+a[i+1][0];
		if(a[i][0]+a[i+1][1]>a[i][1]+a[i+1][1]) k=a[i][0]+a[i+1][1];
		else k=a[i][1]+a[i+1][1];
		if(k>a[i][2]+a[i+1][1]) a[i+1][1]=k;
		else a[i+1][1]=a[i][2]+a[i+1][1];
		if(a[i][1]+a[i+1][2]>a[i][2]+a[i+1][2]) a[i+1][2]=a[i][1]+a[i+1][2];
		else a[i+1][2]=a[i][2]+a[i+1][2];
		if(b[i][0]+b[i+1][0]<b[i][1]+b[i+1][0]) b[i+1][0]=b[i][0]+b[i+1][0];
		else b[i+1][0]=b[i][1]+b[i+1][0];
		if(b[i][0]+b[i+1][1]<b[i][1]+b[i+1][1]) k=b[i][0]+b[i+1][1];
		else k=b[i][1]+b[i+1][1];
		if(k<b[i][2]+b[i+1][1]) b[i+1][1]=k;
		else b[i+1][1]=b[i][2]+b[i+1][1];
		if(b[i][1]+b[i+1][2]<b[i][2]+b[i+1][2]) b[i+1][2]=b[i][1]+b[i+1][2];
		else b[i+1][2]=b[i][2]+b[i+1][2];
	}
	for(i=0;i<3;i++){
		if(a[n-1][i]>max) max=a[n-1][i];
		if(b[n-1][i]<min) min=b[n-1][i];
	}
	printf("%d %d",max,min);
}
