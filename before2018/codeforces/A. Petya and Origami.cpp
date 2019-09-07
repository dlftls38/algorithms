#include <stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	long long answer=0;
	answer+=2*n/k;
	if(2*n%k>0) answer++;
	answer+=5*n/k;
	if(5*n%k>0) answer++;
	answer+=8*n/k;
	if(8*n%k>0) answer++;
	printf("%lld",answer);
}
