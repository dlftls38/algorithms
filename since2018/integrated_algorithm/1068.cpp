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
vector<int>v[50];
int ans;
void dfs(int cur){
	if(v[cur].size()==0){
		ans++;
	}
	else{
		for(int i=0;i<v[cur].size();i++){
			dfs(v[cur][i]);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int start;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(x==-1)
			start=i;
		else
			v[x].push_back(i);
	}
	int del;
	scanf("%d",&del);
	for(i=0;i<n;i++){
		for(j=0;j<v[i].size();j++){
			if(v[i][j]==del){
				v[i].erase(v[i].begin()+j);
			}
		}
	}
	dfs(start);
	if(del==start){
		printf("0");
	}
	else{
		printf("%d",ans);	
	}
}
