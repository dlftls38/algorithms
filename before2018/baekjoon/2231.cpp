#include <stdio.h>
int a[1000001];
int main(){
	int n,i,k,p;
	scanf("%d",&n);
	for(i=1;i<1000001;i++){
		k=i;
		p=i;
		while(1){
			k+=p%10;
			p/=10;
			if(p==0) break;
		}
		if(a[k]==0) a[k]=i;
	}
	printf("%d",a[n]);
}
