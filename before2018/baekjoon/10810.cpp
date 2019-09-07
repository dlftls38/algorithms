#include <stdio.h>
int main(){
	int n,m,z,x,k,i,j=1,a[101]={0};
	scanf("%d%d",&n,&m);
	while(m--){
		scanf("%d%d%d",&z,&x,&k);
		for(i=z;i<=x;i++) a[i]=k;
	}
	while(j<=n) printf("%d ",a[j++]);
}
