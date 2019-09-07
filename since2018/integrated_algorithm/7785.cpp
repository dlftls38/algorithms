#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	map<string,int,greater<string>>m;
	for(i=0;i<n;i++){
		char a[10]={0};
		char b[10]={0};
		scanf("%s%s",a,b);
		if(strcmp(b,"enter")==0){
			m[a]++;
		}
		else{
			m.erase(a);
		}
	}
	for(auto k=m.begin();k!=m.end();k++){
		printf("%s\n",k->first.c_str());
	}
}
