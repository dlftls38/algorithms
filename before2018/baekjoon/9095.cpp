#include <stdio.h>
int main(){
	int a[12]={0,1,2,4},i,n;
	for(i=4;i<12;i++){
		a[i]=a[i-3]+a[i-2]+a[i-1];
	}
	scanf("%d",&i);
	while(i--) scanf("%d",&n), printf("%d\n",a[n]);
}
