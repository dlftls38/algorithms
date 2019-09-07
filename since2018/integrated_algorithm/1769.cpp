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
char f[1000001];
int main(){
	int a=0;
	scanf("%s",f);
	int len=strlen(f);
	int i,j;
	for(i=0;i<len;i++){
		a+=f[i]-48;
	}
	int ans=0;
	if(a>=10){
		ans++;
	}
	while(a>=10){
		int cnt=0;
		int temp=0;
		while(a>0){
			cnt++;
			temp+=a%10;
			a/=10;
		}
		if(cnt>0){
			ans++;
			a=temp;
		}
	}
	printf("%d\n",ans);
	if(a%3==0 && a>0){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
