#include <stdio.h>
int main(){
	int n,c=0,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k==1) c++;
	}
	if(c>n/2) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}
