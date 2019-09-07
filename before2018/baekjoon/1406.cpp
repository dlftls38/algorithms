#include <stdio.h>
#include <string.h>
int main(){
	char a[600001]={0};
	char b[600001]={0};
	scanf("%s",a);
	int len=strlen(a);
	int n;
	char q;
	scanf("%d%c",&n,&q);
	int i;
	int top=0;
	for(i=0;i<n;i++){
		char input[4]={0};
		gets(input);
		if(input[0]=='L'){
			if(len!=0){
				len--;
				b[top++]=a[len];
			}
		}
		else if(input[0]=='D'){
			if(top!=0){
				top--;
				a[len++]=b[top];
			}
		}
		else if(input[0]=='B'){
			if(len!=0){
				len--;
			}
		}
		else{
			a[len++]=input[2];
		}
	}
	for(i=0;i<len;i++){
		printf("%c",a[i]);
	}
	for(i=top-1;i>-1;i--){
		printf("%c",b[i]);
	}
}
