#include <stdio.h>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(){
	int a,b,c,d,z,x;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	z=a*d+c*b;
	x=d*b;
	printf("%d %d",z/gcd(z,x),x/gcd(z,x));
}
