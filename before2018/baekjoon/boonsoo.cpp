#include <stdio.h>

int main() {
	
	int i,xx[10000],xxx[10000],x;
	int a=1;
	int b=1;
	
	scanf("%d",&x);
	
	for (i=0; i<10000; i++){
		xx[i]=a;
		xxx[i]=b;
		if(a==b){
			
			b+=1;
			a=1;
		}
		
		else {
			
			a+=1;
		}
	}
	
	printf("%d/%d",xx[x-1],xxx[x-1]);
}
	
	
