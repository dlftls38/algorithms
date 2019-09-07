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
	int n;
	scanf("%d",&n);
	int i,j;
	int ans=0;
	for(i=0;i<n;i++){
		char a[101]={0};
		scanf("%s",a);
		int len=strlen(a);
		int check[26]={0};
		int p=0;
		for(j=0;j<len;j++){
			if(check[a[j]-97]>0 && j>0 && a[j]!=a[j-1]){
				p=1;
				break;
			}
			check[a[j]-97]++;
		}
		if(p==0){
			ans++;
		}
	}
	printf("%d",ans);
}
