#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	char a[11]={0};
	scanf("%s",a);
	int i,j;
	int len=strlen(a);
	int b[10]={0};
	for(i=0;i<len;i++){
		if(a[i]!='2' && a[i]!='0' && a[i]!='8' && a[i]!='1'){
			printf("0");
			return 0;
		}
		b[a[i]-48]++;
	}
	if(b[0]==b[2] && b[1]==b[8] && b[0]==b[1]){
		printf("8");
	}
	else if(b[0]>0 && b[1]>0 && b[2]>0 && b[8]>0){
		printf("2");
	}
	else{
		printf("1");
	}
}
