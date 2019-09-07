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
	int count[32001]={0};
	vector<int>ganseon[32001];
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		count[b]++;
		ganseon[a].push_back(b);
	}
	priority_queue<int,vector<int>,greater<int> >zero;
	for(i=1;i<=n;i++){
		if(count[i]==0){
			zero.push(i);
		}
	}
	int check[32001]={0};
	while(!zero.empty()){
		int cur=zero.top();
		printf("%d ",cur);
		zero.pop();
		int len=ganseon[cur].size();
		for(i=0;i<len;i++){
			count[ganseon[cur][i]]--;
			if(count[ganseon[cur][i]]==0){
				zero.push(ganseon[cur][i]);
			}
		}
	}
}
