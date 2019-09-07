#include <stdio.h>
#include <string.h>
int main(){
	char a[200]={0};
	gets(a);
	int i;
	for(i=0;i<strlen(a);i++){
		if(a[i]=='a' && a[i+1]=='p' && a[i+2]=='a'){
			printf("a");
			i+=2;
		}
		else if(a[i]=='e' && a[i+1]=='p' && a[i+2]=='e'){
			printf("e");
			i+=2;
		}
		else if(a[i]=='o' && a[i+1]=='p' && a[i+2]=='o'){
			printf("o");
			i+=2;
		}
		else if(a[i]=='u' && a[i+1]=='p' && a[i+2]=='u'){
			printf("u");
			i+=2;
		}
		else if(a[i]=='i' && a[i+1]=='p' && a[i+2]=='i'){
			printf("i");
			i+=2;
		}
		else{
			printf("%c",a[i]);
		}
	}
}
