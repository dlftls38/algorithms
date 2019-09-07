#include <stdio.h>
int main(){
	int n,m,count=0;
	scanf("%d%d",&n,&m);
	while(1){
		if(n>=m) n-=m;
		else m-=n;
		count++;
		if(n==0 || m==0) break;
	}
	printf("%d",count);
}
