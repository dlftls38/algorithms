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
	char a[110]={0};
	scanf("%s",a);
	int i,j;
	int len=strlen(a);
	for(i=0;i<len-1;i++){
		if(a[i]=='V' && a[i+1]=='V' && a[i+2]!='K'){
			a[i+1]='K';
			break;
		}
		else if(a[i]=='K' && a[i+1]=='K' && (i==0 || a[i-1]=='K')){
			a[i]='V';
			break;
		}
	}
	int ans=0;
	for(i=0;i<len-1;i++){
		if(a[i]=='V' && a[i+1]=='K'){
			ans++;
		}
	}
	printf("%d",ans);
}
