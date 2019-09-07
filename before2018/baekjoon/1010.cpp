#include <stdio.h>

int main(){
	
	int t,n,m,i,j,z;
	unsigned long long a=1;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		
		scanf("%d%d",&n,&m);
		if(m-n<n){
			
			n= m-n;
		}
		a=600*7*11*13*17;
		z=1;
		for(j=m;j>m-n;j--){
			
			a*=j;
			if(z<n+1){
				
				a/=z;
				z++;
			}
		}
		a/=600*7*11*13*17;
		printf("%llu\n",a);
	}

}
