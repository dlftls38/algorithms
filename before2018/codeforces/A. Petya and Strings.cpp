#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char a[101]={0};
	char b[101]={0};
	scanf("%s%s",a,b);
	int la=strlen(a);
	int lb=strlen(b);
	for(int i=0;i<la;i++){
		if(a[i]<97){
			a[i]+=32;
		}
	}
	for(int i=0;i<lb;i++){
		if(b[i]<97){
			b[i]+=32;
		}
	}
	int answer=-2;
	for(int i=0;i<la;i++){
		if(a[i]<b[i]){
			answer=-1;
			break;
		}
		else if(a[i]>b[i]){
			answer=1;
			break;
		}
	}
	if(answer!=-2){
		printf("%d",answer);
	}
	else{
		if(la==lb){
			printf("0");
		}
		else if(la<lb){
			printf("-1");
		}
		else{
			printf("1");
		}
	}
}
