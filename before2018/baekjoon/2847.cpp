#include <stdio.h>
int main(){
	int n,i,a[100],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=n-1;i>0;i--){
		if(a[i]<=a[i-1]) count+=a[i-1]-a[i]+1,a[i-1]=a[i]-1;
	}
	printf("%d",count);
}