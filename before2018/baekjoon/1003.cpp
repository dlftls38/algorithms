#include <stdio.h>

int main(){
	
	int a[42]={0};
	int b[42]={0};
	int t,k,i;
	
	scanf("%d",&t);
	
	a[0]=1;
	b[0]=0;
	a[1]=0;
	b[1]=1;
	
	for(i=2;i<41;i++){
		a[i]=a[i-2]+a[i-1];
		b[i]=b[i-2]+b[i-1];
	}
	
	for(i=0;i<t;i++){
		
		scanf("%d",&k);
		printf("%d %d\n",a[k],b[k]);
	}
}
