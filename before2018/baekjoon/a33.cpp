#include <stdio.h>

int gcd(int x, int y){
	
	if (y==0){
		
		return x;
	}
	
	else {
		
		return gcd(y,x%y);
	}
}

int main() {
	
	int n,i;
	int number[10000];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<n-1;i++){
		
		number[i+1]=gcd(number[i],number[i+1]);
	}
	
	printf("%d",number[n-1]);
}
