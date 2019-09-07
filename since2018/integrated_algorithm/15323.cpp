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
	int k,n;
	scanf("%d%d",&k,&n);
	int i,j;
	vector<string>s[26];
	int pos[26]={0};
	int size[26]={0};
	for(i=0;i<k;i++){
		char zig[22]={0};
		scanf("%s",zig);
		s[zig[0]-'a'].push_back(zig);
	}
	for(i=0;i<26;i++){
		size[i]=s[i].size();
		sort(s[i].begin(),s[i].end());
	}
	for(i=0;i<n;i++){
		char zag[2]={0};
		scanf("%s",zag);
		int word = zag[0]-'a';
		printf("%s\n",s[word][pos[word]].c_str());
		pos[word]++;
		if(pos[word]==size[word]){
			pos[word]=0;
		}
	}
}
