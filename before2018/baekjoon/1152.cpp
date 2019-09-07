#include <stdio.h>
#include <string.h>
char a[1000011];
int main(){
	gets(a);
	int i,count=0,len,flag=0;
	len=strlen(a);
	for(i=0;i<len+1;i++){
		if(a[i]>32) flag=1;
		if(flag==1 && (a[i]==32 || a[i]==0)){
			count++;
			flag=0;
		}
	}
	printf("%d",count);
}
