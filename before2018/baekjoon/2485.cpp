#include <stdio.h>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(){
	int n;
	int a[100001]={0};
	scanf("%d",&n);
	int i;
	scanf("%d%d",&a[0],&a[1]);
	int x=a[1]-a[0];
	for(i=2;i<n;i++){
		scanf("%d",&a[i]);
		x=gcd(x,a[i]-a[i-1]);
	}
	printf("%d",(a[n-1]-a[0])/x-n+1);
	
}
