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
	int t;
	scanf("%d",&t);
	while(t--){
		int r;
		scanf("%d",&r);
		char a[21]={0};
		scanf("%s",a);
		int len=strlen(a);
		for(int j=0;j<len;j++){
			for(int i=0;i<r;i++){
				printf("%c",a[j]);
			}
		}
		printf("\n");
	}
}
