#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>v[100001];
int parent[100001];
void dfs(int p){
	for(int i=0;i<v[p].size();i++){
		if(parent[v[p][i]]==0){
			parent[v[p][i]]=p;
			dfs(v[p][i]);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n-1;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	parent[1]=1;
	dfs(1);
	for(i=2;i<n+1;i++){
		printf("%d\n",parent[i]);
	}
}
