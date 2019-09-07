#include <stdio.h>
#include <string.h>

int main(){
	
	char a[100]={0};
	int b;
	
	scanf("%s",a);
	b = strlen(a);
	a[b]='?';
	a[b+1]='?';
	a[b+2]='!';
	printf("%s",a);
}
