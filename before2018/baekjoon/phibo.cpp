#include <stdio.h>

int phibo (int n){
	
	if (n>1){
		
		return phibo(n-1) + phibo(n-2);
	}
	
	else {
		
		return n;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	phibo(n);
	printf("%d", phibo(n));
}
