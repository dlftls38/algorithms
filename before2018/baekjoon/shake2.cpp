#include <stdio.h>
#include <string.h>
int main(){
	int t,i,j,k;
	scanf("%d",&t);
	while(t--){
		int n,g;
		scanf("%d%d",&n,&g);
		char beer[111][111]={0};
		char word[111][111]={0};
		for(i=0;i<n;i++){
			scanf("%s",beer[i]);
		}
		int position[111]={0};
		for(i=0;i<g;i++){
			scanf("%d%s",&position[i],word[i]);
		}
		int count=0;
		int flag=0;
		for(i=0;i<n;i++){
			int count_g=0;
			for(j=0;j<g;j++){
				int len_word = strlen(word[j]);
				for(k=0;k<len_word;k++){
					if(word[j][k]==beer[i][position[j]-1]){
						count_g++;
						break;
					}
				}
			}
			if(count_g==g){
				flag=i;
				count++;
			}
		}
		if(g==0){
			printf("YOU KNOW NOTHING\n");
		}
		else if(count==0){
			printf("DEAD DRUNK\n");
		}
		else if(count==1){
			printf("%s\n",beer[flag]);
		}
		else{
			printf("YOU KNOW NOTHING\n");
		}
	}
}
