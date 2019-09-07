#include <stdio.h>
#include <string.h>
int main(){
	char input[101];
	scanf("%s",input);
	int len=strlen(input),i,j;
	for(i=0;i<26;i++){
		for(j=0;j<len;j++){
			if(input[j]==i+97){
				printf("%d ",j);
				break;
			}
		}
		if(j==len){
			printf("-1 ");
		}
	}
}
