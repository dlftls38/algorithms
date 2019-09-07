#include <stdio.h>
int main(){
	int n,k;
	scanf("%d",&k);
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		if(n%k==0) printf("%d is a multiple of %d.\n",n,k);
		else printf("%d is NOT a multiple of %d.\n",n,k);
	}
}
