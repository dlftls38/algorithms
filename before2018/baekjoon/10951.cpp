#include <stdio.h>
int main(){
	int a,b;
	while(1){
		if(scanf("%d",&a)==-1) break;
		scanf("%d",&b);
		printf("%d\n",a+b);
	}
}
