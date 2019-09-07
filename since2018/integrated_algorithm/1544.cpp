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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	map<string,int>mp;
	for(i=0;i<n;i++){
		char temp[51];
		scanf("%s",temp);
		int len = strlen(temp);
		int check=0;
		for(j=0;j<len;j++){
			char temp2[51]={0};
			strncpy(temp2,temp+j,len-j);
			strncpy(temp2+len-j,temp,j);
			if(mp.find(temp2)!=mp.end()){
				check=1;
			}
		}
		if(check==0){
			mp[temp];
		}
	}
	printf("%d",mp.size());
}
