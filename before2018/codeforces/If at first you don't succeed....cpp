#include <stdio.h>
int main(){
	int a,b,c,n;
	scanf("%d%d%d%d",&a,&b,&c,&n);
	if(c>a || c>b){
		printf("-1");
		return 0;
	}
	a-=c;
	b-=c;
	if(a>=n || b>=n || c>=n || a+b>=n || a+c>=n || b+c>=n){
		printf("-1");
	}
	else if(n-a-b-c>0){
		printf("%d",n-a-b-c);
	}
	else{
		printf("-1");
	}
}
