#include <stdio.h>
int main(){
	int n,i,k=10,z=1;
	unsigned long long a=0;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		if(i<k){	
			a+=z;
		}
		else{	
			k*=10;
			z++;
			a+=z;
		}
	}
	printf("%llu",a);
}
