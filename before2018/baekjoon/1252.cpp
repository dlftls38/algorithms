#include <stdio.h>
#include <string.h>
int main(){
	char a[100]={0};
	char b[100]={0};
	scanf("%s%s",a,b);
	int len=strlen(a);
	int len2=strlen(b);
	int c[1000]={0};
	int i;
	int j=0;
	for(i=len-1;i>-1;i--){
		c[j++]+=a[i]-48;
	}
	j=0;
	for(i=len2-1;i>-1;i--){
		c[j++]+=b[i]-48;
	}
	for(i=0;i<999;i++){
		c[i+1]+=c[i]/2;
		c[i]%=2;
	}
	int flag=0;
	for(i=999;i>-1;i--){
		if(c[i]==1){
			flag=1;
		}
		if(flag==1){
			if(c[i]==1){
				printf("1");
			}
			else{
				printf("0");
			}
		}
	}
	if(flag==0){
		printf("0");
	}
}
