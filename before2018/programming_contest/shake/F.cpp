#include <stdio.h>
#include <string.h>
char word[1100000];
int count=0;
int main(){
	int s,p;
	int condition[27]={0};
	int now[27]={0};
	scanf("%d%d",&s,&p);
	scanf("%s",word);
	int i,j;
	scanf("%d",&condition[0]);
	scanf("%d",&condition[2]);
	scanf("%d",&condition[6]);
	scanf("%d",&condition[19]);
	for(i=0;i<p;i++){
		now[word[i]-65]++;
	}
	if(now[0]>=condition[0] && now[2]>=condition[2] && now[6]>=condition[6] && now[19]>=condition[19]){
		count++;
	}
	int first=0;
	for(i=p;i<s;i++){
		now[word[first]-65]--;
		now[word[i]-65]++;
		if(now[0]>=condition[0] && now[2]>=condition[2] && now[6]>=condition[6] && now[19]>=condition[19]){
			count++;
		}
		first++;
	}
	printf("%d",count);
}
