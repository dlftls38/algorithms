#include <stdio.h>
int main(){
	int n,m,a[101]={0};
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int x;
		scanf("%d",&x);
		a[x]++;
	}
	for(i=1;i<101;i++){
		int count=0;
		for(j=1;j<101;j++){
			count+=a[j]/i;
		}
		if(count<n) break;
	}
	printf("%d",i-1);
}
