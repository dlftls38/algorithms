#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char*);

int main(int argc, char const *argv[]){
	char str[] = "abcdefghijklmonpqrstuvwxyz";
	str = reverse(str);
	printf("%s\n", str);
	free(str);
	return 0;
}

char* reverse(char* s){
	int i,j;
	char* string =(char*)malloc(sizeof(char)*strlen(s));
	for(i=strlen(s)-1,j=0;i>-1;i--,j++){
		string[j]=s[i];
	}
	string[strlen(s)]='\0';
	return string;
}
