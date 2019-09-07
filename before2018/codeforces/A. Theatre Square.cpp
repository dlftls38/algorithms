#include <stdio.h>
int main(){
	int n,m,a;
	scanf("%d%d%d",&n,&m,&a);
	long long answer=n/a;
	 if(n%a>0) answer++;
	 if(m%a>0) answer*=m/a+1;
	 else answer*=m/a;
	printf("%lld",answer);
}
