#include <stdio.h>
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long x=a*b;
	long long i=a;
	long long q=a,w=x/a;
	long long temp;
	if(q>w){
		temp=q;
		q=w;
		w=temp;
	}
	while(q!=w){
		i+=a;
		if((x/i)%a==0){
			if(x/i + i>=q+w){
				break;
			}
			q=i;
			w=x/i;
		}
	}
	if(q<=w){
		printf("%lld %lld",q,w);	
	}
	else{
		printf("%lld %lld",w,q);
	}
}
