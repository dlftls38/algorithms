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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	map<string,int>mp;
	for(i=0;i<n;i++){
		char temp[21]={0};
		scanf("%s",temp);
		mp[temp]=1;
	}
	vector<string>v;
	int cnt=0;
	for(i=0;i<m;i++){
		char temp[21]={0};
		scanf("%s",temp);
		if(mp[temp]==1){
			v.push_back(temp);
			cnt++;
		}
	}
	printf("%d\n",cnt);
	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		printf("%s\n",v[i].c_str());
	}
}
