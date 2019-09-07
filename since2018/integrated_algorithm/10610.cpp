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
	int i,j;
	string s;
	cin>>s;
	int len=s.length();
	int a[10]={0};
	int check=0;
	for(i=0;i<len;i++){
		a[s[i]-48]++;
		check+=s[i]-48;
	}
	if(a[0]==0 || check%3>0){
		printf("-1");
		return 0;
	}
	for(i=9;i>=0;i--){
		for(j=0;j<a[i];j++){
			printf("%d",i);
		}
	}
}
