#include <stdio.h>
void re(int a){
	a++;
}
int main(){
	int a=1;
	re(a);
	printf("%d",a);
}
