#include <stdio.h>
int main(){
	int a,b,c=0,d=0;
	scanf("%d%d",&a,&b);
	int i;
	for(i=0;i<3;i++){
		c*=10;
		c+=a%10;
		a/=10;
		d*=10;
		d+=b%10;
		b/=10;		
	}
	if(c>d){
		printf("%d",c);
	}
	else{
		printf("%d",d);
	}
}
