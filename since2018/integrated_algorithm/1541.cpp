#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int main(){
	char s[51]={0};
	scanf("%s",s);
	int len=strlen(s);
	char op[50]={0};
	if(s[0]=='-'){
		op[0]='-';
	}
	else{
		op[0]='+';
	}
	int tail=1;
	for(int i=1;i<len;i++){
		if(op[tail-1]=='-' || s[i]=='-'){
			op[tail++]='-';
		}
		else if(s[i]=='+'){
			op[tail++]='+';
		}
	}
	int ans=0;
	int cur=0;
	char *token=strtok(s,"+-");
	while(token!=NULL){
		if(op[cur]=='+'){
			ans+=atoi(token);
		}
		else{
			ans-=atoi(token);
		}
		cur++;
		token=strtok(NULL,"+-");
	}
	printf("%d",ans);
}
