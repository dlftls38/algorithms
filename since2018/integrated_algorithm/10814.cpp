#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector < pair < int , int > >v;
	vector < pair < int , string > >v2;
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int a;
		string str;
		scanf("%d",&a);
		cin >> str;
		pair < int , int > p = make_pair(a,i);
		v.push_back(p);
		pair < int , string > p2 = make_pair(i,str);
		v2.push_back(p2);
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++){
		printf("%d %s\n",v[i].first,v2[v[i].second].second.c_str());
	}
}
