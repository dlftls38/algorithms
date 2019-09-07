#include <stdio.h>

int main(){
	
	int n,k,i;
	scanf("%d%d",&k,&n);
	
	int x=1;
	
	for(i=0; i<100000; i++){
		
		if(x>n || x==n){
			
			printf("%d",i);
			break;
		}
		
		x*=k;
	}
}
