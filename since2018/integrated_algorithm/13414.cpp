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
	int k,l;
	scanf("%d%d",&k,&l);
	int i,j;
	map<string,int>mp;
	int cnt=1;
	for(i=0;i<l;i++){
		char temp[9]={0};
		scanf("%s",temp);
		mp[temp]=cnt++;
	}
	vector<pair<int,string> >v;
	for(auto it : mp){
		v.push_back({it.second,it.first});
	}
	sort(v.begin(),v.end());
	cnt=0;
	for(auto it : v){
		cnt++;
		printf("%s\n",it.second.c_str());
		if(cnt==k)break;
	}
}
