#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector <string> s;
vector <string> ss;
vector < pair<string,string> > sss;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		string q;
		cin >> q;
		s.push_back(q);
		ss.push_back(q);
		int len=ss[i].length();
		for(j=0;j<10-len;j++){
			ss[i]+=ss[i][ss[i].length()-1];
		}
		sss.push_back(make_pair(ss[i],s[i]));
	}
	sort(sss.begin(),sss.end());
	reverse(sss.begin(),sss.end());
	if(sss[0].second[0]=='0'){
		printf("0");
	}
	else{
		for(i=0;i<n;i++){
			cout << sss[i].second;
		}
	}
}
