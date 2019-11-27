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
	string s;
	cin>>s;
	int n;
	cin>>n;
	int i,j;
	vector<string>ans;
	for(i=0;i<n;i++){
		string temp;
		cin>>temp;
		int len=temp.length();
		string temp2=temp;
		for(j=0;j<len;j++){
			if(s[j]=='*'){
				temp2[j]='*';
			}
		}
		if(temp2.compare(s)==0){
			ans.push_back(temp);
		}
	}
	printf("%d\n",ans.size());
	for(auto it : ans){
		printf("%s\n",it.c_str());
	}
}
