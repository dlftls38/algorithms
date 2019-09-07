#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
int main(){
	char a[10000]={0};
	fread(a,1000,1000,stdin);
	fwrite(a,1,strlen(a),stdout);
}
