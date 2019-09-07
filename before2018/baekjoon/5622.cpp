#include <stdio.h>
#include <string.h>
int main(){
	
	char a[20]={0};
	int len,i,c=0;
	scanf("%s",a);
	len = strlen(a);
	
	for(i=0;i<len;i++){
		
		if(a[i]==65 || a[i]==66 || a[i]==67){
			c+=3;
		}
		else if(a[i]==68 || a[i]==69 || a[i]==70){
			
			c+=4;
		}
		else if(a[i]==71 || a[i]==72 || a[i]==73){
			
			c+=5;
		}
		else if(a[i]==74 || a[i]==75 || a[i]==76){
			
			c+=6;
		}
		else if(a[i]==77 || a[i]==78 || a[i]==79){
			
			c+=7;
		}
		else if(a[i]==80 || a[i]==81 || a[i]==82 || a[i]==83){
			
			c+=8;
		}
		else if(a[i]==84 || a[i]==85 || a[i]==86){
			
			c+=9;
		}
		else if(a[i]==88 || a[i]==89 || a[i]==90 || a[i]==87){
			
			c+=10;
		}
		
	}
	printf("%d",c);
}
