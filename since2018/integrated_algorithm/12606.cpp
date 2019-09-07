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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int tc;
	scanf("%d",&tc);
	char trash;
	scanf("%c",&trash);
	int i,j;
	for(i=1;i<=tc;i++){
		char s[1001]={0};
		fgets(s,1001,stdin);
		char *str=strtok(s," \n");
		vector<string>v;
		while(str!=NULL){
			v.push_back(str);
			str=strtok(NULL," \n");
		}
		printf("Case #%d: ",i);
		int size=v.size();
		for(j=size-1;j>=0;j--){
			printf("%s ",v[j].c_str());
		}
		printf("\n");
	}
}
