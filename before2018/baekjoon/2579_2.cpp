#include <stdio.h>
int main(){
	int max=0,n,a[310]={0},b[310]={0},c[310]={0},i;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		scanf("%d",&a[i]);
	}
	b[1]=a[1];
	b[2]=a[2];
	for(i=2;i<n+1;i++){
		if(a[i]+b[i-1]>c[i]) c[i]=a[i]+b[i-1];
		if(a[i]+b[i-2]>b[i]) b[i]=a[i]+b[i-2];
		if(a[i]+c[i-2]>b[i]) b[i]=a[i]+c[i-2];
		
	}
	if(max<b[n]) max=b[n];
	if(max<c[n]) max=c[n];
	printf("%d",max);
}
