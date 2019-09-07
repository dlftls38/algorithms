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
#include <math.h>
using namespace std;
int main(){
	char a[8]={0};
	scanf("%s",a);
	int i,j;
	int len=strlen(a);
	int ans[10]={0};
	for(i=0;i<len;i++){
		ans[a[i]-48]++;
	}
	ans[6]+=ans[9]+1;
	ans[9]=0;
	ans[6]/=2;
	int res=0;
	for(i=0;i<10;i++){
		res=max(res,ans[i]);
	}
	printf("%d",res);
}
