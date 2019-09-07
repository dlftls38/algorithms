#include <stdio.h>
#include <string.h>
int main(){
	int i,len,len2,k=0,pr;
	char py[30001]={0};
	char amho[30001]={0};
	gets(py);
	gets(amho);
	len=strlen(py);
	len2=strlen(amho);
	for(i=0;i<len;i++){
		if(py[i]==32){
			printf("%c",32);
		}
		else{
			pr=py[i]-amho[k]+96;
			if(pr<97){
				pr+=26;
			}
			printf("%c",pr);
		}
		k++;
		if(k==len2){
			k=0;
		}
	}
}
