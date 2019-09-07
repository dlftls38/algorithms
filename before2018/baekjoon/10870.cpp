#include <stdio.h>
int main(){
	int a[25]={0,1,1,2,3};
	int i;
	int n;
	scanf("%d",&n);
	for(i=4;i<23;i++){
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d",a[n]);
}
