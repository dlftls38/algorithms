#include <stdio.h>
#include <string.h>
char a8[2000000];
int a2[2000000];
int main(){
	scanf("%s",a8);
	int len=strlen(a8);
	int i;
	for(i=0;i<len;i++){
		a2[3*(len-i-1)]=a8[i]-48;
	}
	for(i=0;i<1910000;i++){
		a2[i+1]+=a2[i]/2;
		a2[i]%=2;
	}
	int flag=0;
	for(i=1910000;i>-1;i--){
		if(a2[i]==1){
			flag=1;
		}
		if(flag==1){
			if(a2[i]==1){
				printf("1");
			}
			else{
				printf("0");
			}
		}
	}
}
