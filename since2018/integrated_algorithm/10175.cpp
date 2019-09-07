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
bool cmp(pair<int,string>a,pair<int,string>b){
	return a.first>b.first;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		string place,animal;
		cin>>place>>animal;
		int len=animal.length();
		map<string,int>mp;
		for(j=0;j<len;j++){
			if(animal[j]=='W'){
				mp["Wolf"]+=3;
			}
			else if(animal[j]=='C'){
				mp["Coyote"]+=1;
			}
			else if(animal[j]=='B'){
				mp["Bobcat"]+=2;
			}
			else if(animal[j]=='M'){
				mp["Mountain Lion"]+=4;
			}
		}
		vector<pair<int,string> >v;
		for(auto it : mp){
			v.push_back({it.second,it.first});
		}
		v.push_back({0,"fdasfdsa"});
		sort(v.begin(),v.end(),cmp);
		if(v[0].first==v[1].first){
			printf("%s: There is no dominant species\n",place.c_str());
		}
		else{
			printf("%s: The %s is the dominant species\n",place.c_str(),v[0].second.c_str());
		}
	}
}
