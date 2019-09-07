#include <stdio.h>
int main(){
	int i,j,t,n,m,a[20];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		scanf("%d",&m);
		int c[10001]={1,0,};
		for(i=0;i<n;i++){
			for(j=0;j<m+1;j++){
				if(j+a[i]<=10000) c[j+a[i]]+=c[j];
			}
		}
		printf("%d\n",c[m]);
	}
}
