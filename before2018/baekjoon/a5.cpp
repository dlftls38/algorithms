#include <stdio.h>
#include <string.h>

int main(){
	
	char fuck[1000];
	int n,fucklen,i,yee;
	
	scanf("%s%d",fuck,&n);
	
	fucklen = strlen(fuck);
	
	yee = n%fucklen;
	
	for(i=yee; i<fucklen; i++){
		
		printf("%c",fuck[i]);
	}
	
	if (yee != 0){
		
		for(i=0; i<yee; i++){
		
			printf("%c",fuck[i]);
		}
	}
}
