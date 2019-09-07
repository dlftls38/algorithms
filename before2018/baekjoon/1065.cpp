#include <stdio.h>

int main(){
	
	int n,i,j,k=0,a,b,c,d;
	
	scanf("%d",&n);
	if(n>99){
		k+=99;
		for(i=100;i<n+1;i++){
			
			a=i;
			b=a%10;
			a/=10;
			c=a%10;
			a/=10;
			d=c-b;
			b=a%10;
			a/=10;
			if(b-c==d){
			}
			else{
				continue;
			}
			if(i>999){
				
				c=a%10;
				a/=10;
				if(c-b==d){
					k++;
				}
				else{
					continue;
				}
			}
			else{
				
				k++;
			}
		}
		printf("%d",k);
	}
	else{
		
		printf("%d",n);
	}
}
