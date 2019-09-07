#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	char color[10][10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
	char word[3][10]={0};
	scanf("%s%s%s",word[0],word[1],word[2]);
	long long res=0l;
	for(int i=0;i<10;i++){
		if(strcmp(word[0],color[i])==0){
			res+=i*10;
		}
	}
	for(int i=0;i<10;i++){
		if(strcmp(word[1],color[i])==0){
			res+=i;
		}
	}
	for(int i=0;i<10;i++){
		if(strcmp(word[2],color[i])==0){
			res*=pow(10,i);
		}
	}
	printf("%lld",res);
}
