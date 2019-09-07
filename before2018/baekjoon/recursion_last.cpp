#include <stdio.h>
int count=0;
void recursion(int n){
	if(n>1){
		recursion(n-1);
		printf(" ");
	}
	if(count==100){
		count=0;
		printf("\n");
	}
	printf("%d",n);
	count++;
	if(n>1){
		printf(" ");
		recursion(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	recursion(n);
}
