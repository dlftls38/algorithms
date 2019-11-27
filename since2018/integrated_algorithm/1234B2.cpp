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
	int n,k;
	cin>>n>>k;
	vector<int>q;
	int i,j;
	for(i=0;i<n;i++){
		int id;
		cin>>id;
		q.push_back(id);
	}
	vector<int>ans;
	map<int,int>check;
	for(auto it : q){
		auto val = it;
		if(check[val]==0){
			if(ans.size()==k){
				check[ans[0]]=0;
				ans.erase(ans.begin());
			}
			ans.push_back(val);
			check[val]=1;
		}
	}
	int size = ans.size();
	printf("%d\n",size);
	for(i=size-1;i>=0;i--){
		printf("%d ",ans[i]);
	}
}
