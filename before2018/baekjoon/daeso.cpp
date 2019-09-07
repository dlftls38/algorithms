#include <stdio.h>
int main(){
	
	char a[4];
	char b[4];
	char c[4];
	char d[4];
	scanf("%s",a);
	scanf("%s",b);
	c[0] = a[2];
	c[1] = a[1];
	c[2] = a[0];
	d[0] = b[2];
	d[1] = b[1];
	d[2] = b[0];
	if (c[0]*100+c[1]*10+c[2]>d[0]*100+d[1]*10+d[2]){
		
		printf("%c%c%c",c[0],c[1],c[2]);
	
	}
	if (c[0]*100+c[1]*10+c[2]<d[0]*100+d[1]*10+d[2]){
		
		printf("%c%c%c",d[0],d[1],d[2]);
	
	}

	return 0;
}
