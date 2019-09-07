#include <stdio.h>

int main(){
	
	unsigned long long a,b,c=0,k;
	int i,j,t;
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%llu%llu",&a,&b);
		for(j=a;j<b+1;j++){
			
			k=j;
			while(1){
				
				if(k<10){
					
					c+=k;
					break;
				}
				else{
					
					c+=k%10;
					k/=10;
				}
			}
		}
		printf("%llu\n",c);
		c=0;
	}
}
