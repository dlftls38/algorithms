#include <stdio.h>
void c(int *q){
	*q=4;
}
int main(){
	int a=3;
	int *p=&a;
	c(p);
	printf("%d",a);
}
