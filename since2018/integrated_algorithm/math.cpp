#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b){
	while(b!=0){
		long long temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}
long long lcm(long long a,long long b){
	return a*b/gcd(a,b);
}
void swap(long long *a,long long *b){
	long long temp=*a;
	*a=*b;
	*b=temp;
}
long long divisor[100000]={0};
long long tail=0;
int main(){
	long long a,b;
	scanf("%llu%llu",&a,&b);
	if(a>b)
		swap(a,b);
	for(long long i=1;i*i<=b-a;i++)
        if((b-a)%i==0){
        	divisor[tail++]=i;	
        	divisor[tail++]=(b-a)/i;
		}
    long long min=1000000000000000000;
    long long k;
    long long l;
	for (long long i = 0; i < tail; ++i)
	{
		l = lcm(a+divisor[i]-(a%divisor[i]),b+divisor[i]-(a%divisor[i]));
		if(min>l){
			min=l;
			k=divisor[i]-(a%divisor[i]);
		}
	}
	l=lcm(a,b);
	if(min>l){
		min=l;
		k=0;
	}
	printf("%llu",k);
}

