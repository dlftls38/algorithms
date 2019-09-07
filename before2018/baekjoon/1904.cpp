#include <stdio.h>
int main(){
	int n,a=1,b=1,c;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		c=b%15746;
		b=a%15746+b%15746;
		a=c;
	}
	printf("%d",b%15746);
}
