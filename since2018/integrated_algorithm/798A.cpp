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
	char a[16]={0};
	scanf("%s",a);
	int i,j;
	int len=strlen(a);
	int cnt=0;
	for(i=0;i<len/2;i++){
		if(a[i]!=a[len-1-i]){
			cnt++;
		}
	}
	if(cnt==1){
		printf("YES");
	}
	else if(cnt==0){
		if(len%2==0){
			printf("NO");
		}
		else{
			printf("YES");
		}
	}
	else{
		printf("NO");
	}
}
