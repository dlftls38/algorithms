#include "stdio.h"
#define min(a,b) (a<b?a:b)
#define INF 987654321
int main(){
	long long n,a,b,c,d,num=0,sum=0,flag=0; scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&c,&d);
	if((float)b/a>(float)d/c) sum+=n/c*d,num+=n/c*c,flag=1;
	else sum+=n/a*b,num+=n/a*a,flag=2;
	//printf("%lld %lld\n",num,sum);
	if(num<n){
		long long temp=sum;
		if(flag==1){
			sum+=(n-num)/a*b==0?INF:(n-num)/a*b;
			sum=min(temp+d,sum);
		}
		else{
			sum+=(n-num)/c*d==0?INF:(n-num)/c*d;
			sum=min(temp+b,sum);
		}
	}
	printf("%lld\n",sum);
	return 0;
}
