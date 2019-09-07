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
	char a[1001];
	char b[1001];
	int aa[26]={0};
	int bb[26]={0};
	scanf("%s%s",a,b);
	int lena=strlen(a);
	int lenb=strlen(b);
	int i,j;
	for(i=0;i<lena;i++){
		aa[a[i]-97]++;
	}
	for(i=0;i<lenb;i++){
		bb[b[i]-97]++;
	}
	int ans=0;
	for(i=0;i<26;i++){
		ans+=abs(aa[i]-bb[i]);
	}
	printf("%d",ans);
}


