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
bool cmp(pair<pair<int,int>,pair<int,int> > a,pair<pair<int,int>,pair<int,int> > b){
	if(a.first.first>b.first.first){
		return true;
	}
	else if(a.first.first==b.first.first){
		if(a.first.second<b.first.second){
			return true;
		}
		else if(a.first.second==b.first.second){
			if(a.second.first<b.second.first){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	vector<pair<pair<int,int>,pair<int,int> > >v;
	int i,j;
	for(i=0;i<n;i++){
		int s,c,l;
		scanf("%d%d%d",&s,&c,&l);
		v.push_back({{s,c},{l,i+1}});
	}
	sort(v.begin(),v.end(),cmp);
	printf("%d",v[0].second.second);
}
