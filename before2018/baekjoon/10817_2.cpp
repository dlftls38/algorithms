#include <stdio.h>
#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y
int main(){
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",max(min(a,b),min(b,c)));
}
