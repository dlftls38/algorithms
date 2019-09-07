#include <stdio.h>
#include <string.h>
int main(){
	int i,j;
	char input[60]={0};
	scanf("%s",input);
	char easy[12][50]={0};
	int k;
	for(i=0;i<12;i++){
		for(j=0;j<i+1;j++){
			easy[i][j]='w';
		}
		k=j;
		for(j=k;j<i+1+k;j++){
			easy[i][j]='o';
		}
		k=j;
		for(j=k;j<i+1+k;j++){
			easy[i][j]='l';
		}
		k=j;
		for(j=k;j<i+1+k;j++){
			easy[i][j]='f';
		}
	}
	int len = strlen(input);
	for(i=0;i<len;i++){
		int flag=0;
		for(j=0;j<12;j++){
			if(strncmp(&input[i],easy[j],(j+1)*4)==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("0");
			return 0;
		}
		i+=(j+1)*4-1;
	}
	printf("1");
	
}
