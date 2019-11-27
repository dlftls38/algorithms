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
int check[200];
vector<pair<int,int>>v[51];
int n;
void solve(int cur){
	int i,j;
	if(cur==0){
		for(i=0;i<200;i++){
			if(check[i]>0){
				printf("%d ",check[i]);
			}
		}
		exit(0);
	}
	for(auto it : v[cur]){
		if(check[it.first]==0 && check[it.second]==0){
			//printf("%d %d %d\n",cur,it.first,it.second);
			check[it.first]=-1;
			check[it.second]=cur;
			solve(cur-1);
			check[it.first]=0;
			check[it.second]=0;
		}
	}
}
int main(){
	string s;
	cin>>s;
	int len=s.length();
	int i,j;
	for(i=0;i<len;i++){
		n++;
		if(i>=9){
			i++;
		}
	}
	for(i=0;i<len;i++){
		if(s[i]!='0')
			v[s[i]-'0'].push_back({i,i});
		if(i && ((s[i-1]-'0')*10+s[i]-'0')<=n && s[i-1]!='0'){
			v[(s[i-1]-'0')*10+s[i]-'0'].push_back({i-1,i});
		}
	}
	solve(n);
}
