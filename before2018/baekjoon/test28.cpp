#include <stdio.h>
#include <stdlib.h>
int test(int x){
	if(x==0){
		exit(0);
		printf("! 1 !");
	}
	else{
		exit(1);
	}
}
int main(){
	if(test(1)==1){
		printf("! 1 !");
	}
	printf("! 1 !");
}
