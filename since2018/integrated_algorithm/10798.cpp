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
	char s[5][16]={0};
	int len[5]={0};
	int i,j;
	int max_len=0;
	for(i=0;i<5;i++){
		scanf("%s",s[i]);
		len[i]=strlen(s[i]);
		max_len=max(max_len,len[i]);
	}
	for(i=0;i<max_len;i++){
		for(j=0;j<5;j++){
			if(s[j][i]>10)printf("%c",s[j][i]);
		}
	}
}
