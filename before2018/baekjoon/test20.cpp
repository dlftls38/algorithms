#include <stdio.h>
#include <string.h>
int main(){
	int n,i;
	scanf("%d",&n);
	char min[1000]={0};
	scanf("%s",min);
	for(i=0;i<n-1;i++){
		char input[1000]={0};
		scanf("%s",input);
		if(strcmp(input,min)<0){
			strcpy(min,input);
		}
	}
	printf("%s",min);
}
