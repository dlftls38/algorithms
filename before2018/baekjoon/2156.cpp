#include <stdio.h>
int main(){
	int max=0,n,a[10003]={0},b[10003]={0},c[10003]={0},i,now;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		scanf("%d",&a[i]);
	}
	b[1]=a[1];
	b[2]=a[2];
	c[2]=a[2]+b[1];
	now=b[1];
	for(i=3;i<n+1;i++){
		c[i]=a[i]+b[i-1];
		b[i]=now+a[i];
		if(now<b[i-1]) now=b[i-1];
		if(now<c[i-1]) now=c[i-1];
		
	}
	if(max<b[n]) max=b[n];
	if(max<c[n]) max=c[n];
	if(max<b[n-1]) max=b[n-1];
	if(max<c[n-1]) max=c[n-1];
	printf("%d",max);
}
