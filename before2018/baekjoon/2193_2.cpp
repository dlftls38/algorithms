#include <stdio.h>
int main(){
	int i,n;
	unsigned long long pn[90];
	pn[0]=1;
	pn[1]=1;
	scanf("%d",&n);
	for(i=2;i<n;i++){
		pn[i]=pn[i-1]+pn[i-2];
	}
	printf("%llu",pn[n-1]);
}
