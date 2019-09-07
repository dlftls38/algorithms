#include <stdio.h>
void re(int a[]){
	a[0]++;
}
int main(){
	int b[1]={1};
	re(b);
	printf("%d",b[0]);
}
