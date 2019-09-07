#include <stdio.h>
int main(){
	int t,n,i,j,k,a[46],b[4000]={0};
	scanf("%d",&t);
	for(i=1;i<46;i++) a[i]=(i*(i+1))/2;
	for(i=1;i<46;i++) for(j=1;j<46;j++) for(k=1;k<46;k++) b[a[i]+a[j]+a[k]]=1;
	while(t--) scanf("%d",&n),printf("%d\n",b[n]);
}
