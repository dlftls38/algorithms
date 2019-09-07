#include <stdio.h>
long long recur(int a,int b){
	long long x=1;
	for(int i=0;i<b;i++){
		x*=a;
	}
	return x;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%lld",recur(a,b));
}
