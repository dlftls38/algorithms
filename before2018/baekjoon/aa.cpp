#include <stdio.h>

int main(){
	
	int t,i,j,a,b;
	int c=0;
	int d=0;
	
	scanf("%d",&t);
	
	for(j=0;j<t;j++){
	for(i=0;i<7;i++){
		
		scanf("%d%d",&a,&b);
		c += a;
		d += b;
	}
	if (c>d){
		
		printf("God Junbeom bless you\n");
	}
	else if (c<d){
		
		printf("Cute Yunseong I love you\n");
	}
	
	else{
		
		printf("Seo A Jeong solo\n");
	}
	c = 0;
	d = 0;
	}
}
