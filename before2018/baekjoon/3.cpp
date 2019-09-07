#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	char word[50][60]={0};
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
	}
	int a[60]={0};
	int len=strlen(word[0]);
	for(i=0;i<len;i++){
		int flag=0;
		for(j=1;j<n;j++){
			if(word[0][i]!=word[j][i]){
				flag=1;
			}
		}
		if(flag==1){
			a[i]=1;
		}
	}
	for(i=0;i<len;i++){
		if(a[i]==1){
			printf("?");
		}
		else{
			printf("%c",word[0][i]);
		}
	}
}
