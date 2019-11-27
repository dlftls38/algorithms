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
set<string>s;
map<string,vector<string>>mp;
map<string,int>visit;
void solve(string cur){
	vector<string>&v = mp[cur];
	if(visit[cur]==1){
		return;
	}
	visit[cur]=1;
	if(!v.empty()){
		int size = v.size();
		for(int i=0;i<size;i++){
			s.insert(v[i]);
			solve(v[i]);
		}
	}
}
int main(){
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++){
		char a[20];
		char b[20];
		char c[20];
		scanf("%s%s%s",a,b,c);
		mp[a].push_back(c);
	}
	string cur = "Baba";
	solve(cur);
	for(auto k : s){
		printf("%s\n",k.c_str());
	}
}
