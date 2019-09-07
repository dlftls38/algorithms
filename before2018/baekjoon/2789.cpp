#include <stdio.h>
#include <string.h>
int main(){
	char a[200]={0};
	scanf("%s",a);
	int i;
	int len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]!='C' && a[i]!='A' && a[i]!='M' && a[i]!='B' && a[i]!='R' && a[i]!='I' && a[i]!='D' && a[i]!='G' && a[i]!='E'){
			printf("%c",a[i]);
		}
	}
}
