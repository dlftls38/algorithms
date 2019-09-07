#include <stdio.h>
int main(){
	int n,a,b,count=0;
	scanf("%d%d%d",&n,&a,&b);
	a--,b--;
	while(1){
		count++,a/=2,b/=2;
		if(a==b) break;
	}
	printf("%d",count);
}
