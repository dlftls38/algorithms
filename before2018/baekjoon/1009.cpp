#include <stdio.h>

int main(){
	int t,i,j,c=2;
	long long a,b,k,n;
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%lld%lld",&a,&b);
		k=a;
		if(b<10){
			
			for(j=1;j<b;j++){
				
				k*=a;
			}
			if(k%10==0){
				
				printf("10\n");
			}
			else{
				
				printf("%lld\n",k%10);
			}
		}
		else{
			c=2;
			n=a*a;
			while(1){
				
				if(a%10==n%10){
					
					break;
				}
				else{
					
					c++;
					n*=a;
				}
			}
			c-=1;
			b%=c;
			if(b==0){
				
				for(j=1;j<c;j++){
					
					k*=a;
				}
			}
			else{
				
				for(j=1;j<b;j++){
					
					k*=a;
				}				
			}
			if(k%10==0){
				
				printf("10\n");
			}
			else{
				
				printf("%lld\n",k%10);
			}
		}
	}
}
