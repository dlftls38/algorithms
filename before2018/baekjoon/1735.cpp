#include <stdio.h>

int main(){
	
	int a,aa,b,bb,c,d;
	int i,j;
	
	scanf("%d%d%d%d",&a,&aa,&b,&bb);
	
	c = a*bb + b*aa;
	d = aa*bb;
	
	for(i=2;i<30001;i++){
		
		while(1){
			
			if(c%i==0 && d%i==0){
				
				c/=i;
				d/=i;
			}
			else{
				
				break;
			}
		}
	}
	printf("%d %d\n",c,d);
}
