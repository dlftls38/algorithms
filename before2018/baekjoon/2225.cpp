#include <stdio.h>
int main(){
	int n,k,i,j,sum;
	long long count=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<=n;i++){
		sum=0;
		for(j=i;j<i+k;j++){
			sum+=j;
			if(sum>n) break;
		}
		if(sum==n) count++;
	}
	printf("%lld",count);
}
