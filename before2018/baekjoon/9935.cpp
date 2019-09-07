#include <stdio.h>
#include <string.h>
char a[1100000];
char b[1100000];
char bomb[50];
int main(){
	int len,len2,top=0,i,j,k=0;
	scanf("%s",a);
	scanf("%s",bomb);
	len = strlen(a);
	len2 = strlen(bomb);
	for(i=0;i<len;i++){
		b[top++]=a[i];
		if(b[top-1]==bomb[k]){
			k++;
		}
		else{
			k=0;
			if(b[top-1]==bomb[k]){
				k++;
			}
		}
		if(k==len2){
			for(j=0;j<len2;j++){
				b[--top]=0;
			}
			k=0;
			for(j=top-len2+1;j<top;j++){
				if(b[j]==bomb[k]){
					k++;
				}
				else{
					k=0;
					if(b[j]==bomb[k]){
						k++;
					}
				}
			}
		}
	}
	if(top==0){
		printf("FRULA");
	}
	else{
		printf("%s",b);
	}
}
