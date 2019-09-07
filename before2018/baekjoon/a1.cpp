#include <stdio.h>

int jaegob(int a){
	
	int i;
	int b=1;
	
	for (i=0; i<a; i++){
		
		b*=10;
	}
	
	return b;
}
int main() {
	
	int n,i;
	int k[10];
	int p=0;
	
	scanf("%d",&n);
	
	for (i=0; i<10; i++){
		
		k[i]=0;
	}
	
	for (i=9; i>-1; i--){
		
		if (n/jaegob(i)==0){
		}
		else {
			
			k[i] = n/jaegob(i);
			n -= n/jaegob(i)*jaegob(i);
		}
	}
	
	for (i=0; i<10; i++){
		p+=k[i];
	}
	printf("%d",p);
}
