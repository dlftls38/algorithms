#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	char a[30000]={0};
	scanf("%s",a);
	int len=strlen(a);
	int i;
	int check=0;
	int index;
	for(i=0;i<len;i++){
		if(a[i]=='x'){
			check=1;
			index=i;
		}
	}
	if(check==0){
		printf("0");
	}
	else{
		for(i=0;i<index;i++){
			printf("%c",a[i]);
		}
		if(index==0 || a[0]=='-' && a[1]=='x'){
			printf("1");
		}
	}
}
