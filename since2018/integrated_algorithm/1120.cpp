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
	char a[51]={0};
	char b[51]={0};
	scanf("%s%s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	int i,j;
	int max_count=0;
	for(i=0;i<=lenb-lena;i++){
		int count=0;
		for(j=0;j<lena;j++){
			if(a[j]==b[j+i]){
				count++;
			}
		}
		max_count=max(max_count,count);
	}
	printf("%d",lena-max_count);
}
