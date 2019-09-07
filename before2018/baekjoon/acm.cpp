#include <stdio.h>

int main() {
	
	int i,t,h,w,n;
	
	scanf("%d",&t);
	
	for (i=0; i<t; i++){
		scanf("%d%d%d",&h,&w,&n);
		if (n%h==0){
			printf("%d\n",100*(1+(n-1)%h) + n/h);
		}
		else {
			printf("%d\n",100*(n%h) + n/h+1);
		}
	}
}
