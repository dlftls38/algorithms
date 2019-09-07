#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int count[32001];
	vector<int>ganseon[32001];
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		count[a]++;
		ganseon[b].push_back(a);
	}
	queue<int>zero;
	stack<int>ans;
	for(i=1;i<=n;i++){
		if(count[i]==0){
			zero.push(i);
		}
	}
	while(!zero.empty()){
		int len=ganseon[zero.front()].size();
		for(i=0;i<len;i++){
			count[ganseon[zero.front()][i]]--;
			if(count[ganseon[zero.front()][i]]==0){
				zero.push(ganseon[zero.front()][i]);
			}
		}
		ans.push(zero.front());
		zero.pop();
	}
	for(i=0;i<n;i++){
		printf("%d ",ans.top());
		ans.pop();
	}
}
