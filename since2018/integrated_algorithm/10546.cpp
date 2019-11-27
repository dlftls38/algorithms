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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	int n;
	cin>>n;
	map<string,int>mp;
	for(int i=1;i<n*2;i++){
		string name;
		cin>>name;
		mp[name]++;
	}
	for(auto it : mp){
		if(it.second%2==1){
			printf("%s",it.first.c_str());
			return 0;
		}
	}
}
