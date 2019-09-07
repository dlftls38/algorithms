#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	char a[101]={0};
	scanf("%s",a);
	int i;
	int len=strlen(a);
	int b[26]={0};
	for(i=0;i<len;i++){
		b[a[i]-97]++;
	}
	for(i=0;i<26;i++){
		printf("%d ",b[i]);
	}
}
