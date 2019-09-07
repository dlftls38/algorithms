#include <stdio.h>
#include <string.h>
int main(){
	char gg[10001]={0};
	gets(gg);
	int i,a=0,b=0,len;
	len=strlen(gg);
	for(i=0;i<len;i++){
		if(strncmp(&gg[i],"JOI",3)==0){
			a++;
			i++;
		}
		if(strncmp(&gg[i],"IOI",3)==0){
			b++;
			i++;
		}
	}
	printf("%d\n%d",a,b);
}
