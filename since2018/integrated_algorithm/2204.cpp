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
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		int i,j;
		vector<pair<string,int>>v;
		int change[1000][30]={0};
		for(i=0;i<n;i++){
			string temp;
			cin>>temp;
			int len=temp.length();
			for(j=0;j<len;j++){
				if(temp[j]>='a'){
					temp[j]-='a'-'A';
					change[i][j]=1;
				}
			}
			v.push_back({temp,i});
		}
		sort(v.begin(),v.end());
		for(i=0;i<v[0].first.length();i++){
			if(change[v[0].second][i]){
				v[0].first[i]+='a'-'A';
			}
		}
		printf("%s\n",v[0].first.c_str());
	}
}
