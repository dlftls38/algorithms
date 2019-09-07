#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <set>
using namespace std;
set< pair<int,string> >s;
int main(){
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++){
		string temp;
		cin>>temp;
		s.insert(make_pair(temp.length(),temp));
	}
	for(auto it=s.begin();it!=s.end();it++){
		cout<<it->second<<'\n';
	}
}
