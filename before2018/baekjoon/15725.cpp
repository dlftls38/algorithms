#include <stdio.h>
#include <string.h>
int main(){
	char a[10]={0};
	scanf("%s",a);
	int i;
	int len=strlen(a);
	int check=0;
	for(i=0;i<len;i++){
		if(a[i]=='x') check=1;
	}
	if(check==1){
		for(i=0;a[i]!='x';i++){
			printf("%c",a[i]);
		}
	}
}
