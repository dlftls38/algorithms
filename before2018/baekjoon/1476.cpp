#include <stdio.h>
int main(){
	int e,s,m,count=0,z=0,x=0,c=0;
	scanf("%d%d%d",&e,&s,&m);
	while(1){
		z++;
		x++;
		c++;
		count++;
		if(z==16) z=1;
		if(x==29) x=1;
		if(c==20) c=1;
		if(z==e && x==s && c==m) break;
	}
	printf("%d",count);
}
