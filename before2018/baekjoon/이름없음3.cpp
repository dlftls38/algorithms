#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,sum=0;
	scanf("%d",&n);
	char word[100][12]={0};
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
	}
	for(i=1;i<n;i++){
		int lenlen=strlen(word[0]),len=strlen(word[i]),check[200]={0};
		for(j=0;j<lenlen;j++) check[word[0][j]]++;
		if(len>=lenlen){
			if(len-lenlen>1){
				continue;
			}
			else{
				int count = len;
				for(j=0;j<len;j++){
					if(check[word[i][j]]>0){
						check[word[i][j]]--;
						count--;
					}
				}
				if(count==0 || count==1){
					sum++;
				}
			}
		}
		else{
			if(lenlen-len>1){
				continue;
			}
			else{
				int count = 0;
				for(j=0;j<len;j++){
					if(check[word[i][j]]>0){
						check[word[i][j]]--;
						count++;
					}
				}
				if(count==lenlen-1 || count==lenlen || count==lenlen+1){
					sum++;
				}
			}
		}
	}
	printf("%d",sum);
}
