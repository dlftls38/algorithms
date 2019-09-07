#include <stdio.h>
int main(){
	int a[42]={0},i,k;
	for(i=0;i<10;i++){
		scanf("%d",&k);
		a[k%42]=1;
	}
	k=0;
	for(i=0;i<42;i++){
		if(a[i]==1) k++;
	}
	printf("%d",k);
}
