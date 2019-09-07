#include <stdio.h>
int main(){
	long long n;
	int m,i,j;
	scanf("%lld%d",&n,&m);
	long long answer=0;
	for(i=1;i<=m;i++)
		for(j=1;j<=m;j++){
			if((i*i+j*j)%m>0) continue;
			answer+=((n+m-i)/m)*((n+m-j)/m);
			
		}
	printf("%lld",answer);
}
