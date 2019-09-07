#include <stdio.h>
#include <string.h>
int main(){
	char a[7];
	int i,k=1,h=0;
	scanf("%s",a);
	for(i=strlen(a)-1;i>=0;i--){
		if(a[i]>60) h+=(a[i]-55)*k;
		else h+=(a[i]-48)*k;
		k*=16;
	}
	printf("%d",h);
}
