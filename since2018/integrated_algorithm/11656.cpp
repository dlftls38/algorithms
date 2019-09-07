#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	string s;
	cin>>s;
	vector<string>v;
	int i;
	for(i=0;i<s.length();i++){
		v.push_back(s.substr(i));
	}
	sort(v.begin(),v.end());
	for(i=0;i<s.length();i++){
		printf("%s\n",v[i].c_str());
	}
}
