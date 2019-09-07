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
	char a[105]={0};
	scanf("%s",a);
	int len=strlen(a);
	int ans=0;
	for(int i=0;i<len;i++){
		if(a[i]=='c' && a[i+1]=='='){
			ans++;
			i++;
		}
		if(a[i]=='c' && a[i+1]=='-'){
			ans++;
			i++;
		}
		if(a[i]=='d' && a[i+1]=='z' && a[i+2]=='='){
			ans++;
			ans++;
			i++;
			i++;
		}
		if(a[i]=='d' && a[i+1]=='-'){
			ans++;
			i++;
		}
		if(a[i]=='l' && a[i+1]=='j'){
			ans++;
			i++;
		}
		if(a[i]=='n' && a[i+1]=='j'){
			ans++;
			i++;
		}
		if(a[i]=='s' && a[i+1]=='='){
			ans++;
			i++;
		}
		if(a[i]=='z' && a[i+1]=='='){
			ans++;
			i++;
		}
	}
	printf("%d",len-ans);
}
