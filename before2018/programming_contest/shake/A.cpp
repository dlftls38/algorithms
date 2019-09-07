#include <stdio.h>
#include <string.h>
int flag=0;
int flag2=0;
int n;
void dfs(int map[27][27],int count,int now){
	if(flag==1){
		return;
	}
	if(count==n){
		flag=1;
		return;
	}
	int i;
	for(i=0;i<27;i++){
		if(map[now][i]>0){
			map[now][i]--;
			dfs(map,count+1,i);
			map[now][i]++;
		}
	}
}
int main(){
	scanf("%d",&n);
	int i;
	int map[27][27]={0};
	int start[27]={0};
	for(i=0;i<n;i++){
		char word[20]={0};
		scanf("%s",word);
		int len=strlen(word);
		map[word[0]-97][word[len-1]-97]++;
		start[i]=word[0]-97;
	}
	for(i=0;i<n;i++){
		dfs(map,0,start[i]);
	}
	if(flag==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
