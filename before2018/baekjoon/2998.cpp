#include <stdio.h>
#include <string.h>
int main(){
	char a[101]={0};
	char b[4]={0};
	int len,q=0,i;
	gets(a);
	len=strlen(a);
	while(1){
		if((len+q)%3!=0){
			b[q++]='0';
		}
		else{
			break;
		}
	}
	for(i=0;i<len;i++){
		b[q++]=a[i];
		if(q==3){
			if(strcmp(b,"000")==0)printf("0");
			if(strcmp(b,"001")==0)printf("1");
			if(strcmp(b,"010")==0)printf("2");
			if(strcmp(b,"011")==0)printf("3");
			if(strcmp(b,"100")==0)printf("4");
			if(strcmp(b,"101")==0)printf("5");
			if(strcmp(b,"110")==0)printf("6");
			if(strcmp(b,"111")==0)printf("7");
			q=0;
		}
	}
}
