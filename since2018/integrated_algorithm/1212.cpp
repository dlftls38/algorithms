#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
char a[333335];
int main(){
	scanf("%s",a);
	int len=strlen(a);
	int i=0;
		if(a[i]=='0'){
			printf("0");
		}
		else if(a[i]=='1'){
			printf("1");
		}
		else if(a[i]=='2'){
			printf("10");
		}
		else if(a[i]=='3'){
			printf("11");
		}
		else if(a[i]=='4'){
			printf("100");
		}
		else if(a[i]=='5'){
			printf("101");
		}
		else if(a[i]=='6'){
			printf("110");
		}
		else{
			printf("111");
		}	
	for(i=1;i<len;i++){
		if(a[i]=='0'){
			printf("000");
		}
		else if(a[i]=='1'){
			printf("001");
		}
		else if(a[i]=='2'){
			printf("010");
		}
		else if(a[i]=='3'){
			printf("011");
		}
		else if(a[i]=='4'){
			printf("100");
		}
		else if(a[i]=='5'){
			printf("101");
		}
		else if(a[i]=='6'){
			printf("110");
		}
		else{
			printf("111");
		}
	}
}
