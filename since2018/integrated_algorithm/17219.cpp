#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n,m;
	cin>>n;
	cin>>m;
	map<string,string>mp;
	for(int i=0;i<n;i++){
		string a;
		string b;
		cin>>a;
		cin>>b;
		mp.insert(make_pair(a,b));
	}
	for(int i=0;i<m;i++){
		string a;
		cin>>a;
		cout<<mp.find(a)->second<<'\n';
	}
}
