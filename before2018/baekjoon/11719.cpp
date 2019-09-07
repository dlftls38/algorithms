#include <stdio.h>
int main(){
	while(1){
		char a;
		a=getchar();
		if(a==EOF) break;
		putchar(a);
	}
}
