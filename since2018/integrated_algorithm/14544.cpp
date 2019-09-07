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
	int tc;
	scanf("%d",&tc);
	int i,j;
	for(i=1;i<=tc;i++){
		int n,m;
		scanf("%d%d",&n,&m);
		map<string,int>mp;
		for(j=0;j<n;j++){
			string str;
			cin>>str;
			mp[str]=0;
		}
		for(j=0;j<m;j++){
			string str;
			cin>>str;
			int vote;
			scanf("%d",&vote);
			mp[str]+=vote;
			cin>>str;
		}
		set<pair<int,string> ,greater<pair<int,string> > >s;
		for(auto it : mp){
			s.insert({it.second,it.first});
		}
		string a;
		string b;
		int aa=0;
		int bb=0;
		for(auto it : s){
			if(aa==0){
				a=it.second;
				aa=it.first;
			}
			else{
				b=it.second;
				bb=it.first;
				break;
			}
		}
		if(aa==bb){
			printf("VOTE %d: THERE IS A DILEMMA\n",i);
		}
		else{
			printf("VOTE %d: THE WINNER IS %s %d\n",i,a.c_str(),aa);
		}
	}
}
