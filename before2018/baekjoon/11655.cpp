#include <stdio.h>
#include <string.h>
int main(){
	char a[110]={0};
	gets(a);
	int i,len=strlen(a);
	for(i=0;i<len;i++){
		if(64<a[i] && a[i]<91){
			if(a[i]+13>90){
				printf("%c",a[i]+13-26);
			}
			else{
				printf("%c",a[i]+13);
			}
		}
		else if(96<a[i] && a[i]<123){
			if(a[i]+13>122){
				printf("%c",a[i]+13-26);
			}
			else{
				printf("%c",a[i]+13);
			}	
		}
		else{
			printf("%c",a[i]);
		}
	}
}
