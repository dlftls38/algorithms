#include <stdio.h>
#include <string.h>

int main(){
	
	int t,i,j,len;
	char a[1111] = {0};
	
	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		
		scanf("%s",a);
		len = strlen(a);
		printf("%c%c\n",a[0],a[len-1]);
		
	}
}
