#include <stdio.h>
int main(){
	printf("%d",1^0^0);
	int n,m;
	long long a[101]={0};
	long long b[101]={0};
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%lld",&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d %d\n",a[i]^i,b[j]^j);
		}
		printf("\n");
	}
}
