#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
char a[1000001];
int main(){
	scanf("%s",a);
	int len=strlen(a);
	int i;
	if(len%3==1){
		printf("%d",(a[0]-48));
	}
	else if(len%3==2){
		printf("%d",(a[0]-48)*2+(a[1]-48));
	}
	for(i=len%3;i<len;i+=3){
		printf("%d",(a[i]-48)*4+(a[i+1]-48)*2+(a[i+2]-48));
	}
}
