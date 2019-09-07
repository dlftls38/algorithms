#include<stdio.h>

int main(){
	
	int a,b,i,j,c;
	int k=1;
	
	scanf("%d%d",&a,&b);
	
	if(a<b){
		
		c=a;
	}
	
	else {
		
		c=b;
	}
	
	for(j=0;j<1000;j++){
		
	
		for(i=2;i<c;i++){
		
			if(a%i == 0 && b%i ==0){
			
				a/=i;
				b/=i;
				k*=i;
			}
		}
	}
	
	printf("%d",k);	
}
