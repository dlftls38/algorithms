#include <stdio.h>
#include <string.h>
char a[1000001];
char b[1000001];
char bomb[37];
int main(){
	int len,len2,top=0,i,j;
	scanf("%s",a);
	scanf("%s",bomb);
	len = strlen(a);
	len2 = strlen(bomb);
	for(i=0;i<len;i++){
		b[top++]=a[i];
		if(top-len2>=0 && strncmp(&b[top-len2],bomb,len2)==0){
			for(j=top-len2;j<top;j++){
				b[j]='\0';
			}
			top-=len2;
		}
	}
	if(top==0){
		printf("FRULA");
	}
	else{
		printf("%s",b);
	}
}
