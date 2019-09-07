#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	char word[1000][51]={0};
	int sum[1000]={0};
	int len[1000]={0};
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
		len[i]=strlen(word[i]);
		for(j=0;j<len[i];j++){
			if(word[i][j]>='0' && word[i][j]<='9'){
				sum[i]+=word[i][j]-48;
			}
		}
	}
	for(i=0;i<n;i++){
		int small_len=10000;
		int position;
		for(j=0;j<n;j++){
			if(small_len>len[j] && len[j]!=0){
				small_len=len[j];
				position=j;
			}
		}
		for(j=0;j<n;j++){
			if(small_len==len[j]){
				if(sum[position]>sum[j]){
					position=j;
				}
				else if(sum[position]==sum[j]){
					if(strcmp(word[position],word[j])>0){
						position=j;
					}
				}
			}
		}
		len[position]=0;
		printf("%s\n",word[position]);
	}

}
