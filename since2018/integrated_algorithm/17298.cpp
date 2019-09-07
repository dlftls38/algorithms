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
using namespace std;
int ans[1000000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	vector<int>v;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	stack<pair<int,int> >s;
	s.push(make_pair(v[0],0));
	for(i=1;i<n;i++){
		while(!s.empty() && s.top().first<v[i]){
			ans[s.top().second]=v[i];
			s.pop();
		}
		s.push({v[i],i});
	}
	for(i=0;i<n;i++){
		if(ans[i]==0)
			printf("-1 ");
		else
			printf("%d ",ans[i]);
	}
}
