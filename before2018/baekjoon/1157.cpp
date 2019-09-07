#include <stdio.h>
#include <string.h>
char a[1000001];
int main(){
	scanf("%s",a);
	int i,count=0,len,b[26]={0},max=0;
	char r;
	len = strlen(a);
	for(i=0;i<len;i++){
		if(a[i]-97<0){
			b[a[i]-65]++;
		}
		else{
			b[a[i]-97]++;
		}
	}
	for(i=0;i<26;i++){
		if(max<b[i])max=b[i],r=i+65;
	}
	for(i=0;i<26;i++){
		if(max==b[i]) count++;
	}
	if(count>1) printf("?");
	else printf("%c",r);
}
