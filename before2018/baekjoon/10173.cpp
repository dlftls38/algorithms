#include <stdio.h>
#include <string.h>
int main(){
	while(1){
		char a[90]={0};
		gets(a);
		if(strcmp(a,"EOI")==0){
			break;
		}
		int i;
		int flag=0;
		for(i=0;i<strlen(a);i++){
			
			if((a[i]=='N' || a[i]=='n') && (a[i+1]=='e' || a[i+1]=='E') && (a[i+2]=='m' || a[i+2]=='M') && (a[i+3]=='O' || a[i+3]=='o')){
				printf("Found\n");
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("Missing\n");
		}
	}
}
