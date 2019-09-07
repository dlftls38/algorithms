#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int,int> >v[100001];
int check[100001];
int answer;
int dfs(int node){
	vector<int>temp;
	temp.push_back(0);
	for(int i=0;i<v[node].size();i++){
		if(check[v[node][i].first]==0){
			check[v[node][i].first]=1;
			temp.push_back(dfs(v[node][i].first)+v[node][i].second);
		}
	}
	sort(temp.begin(),temp.end());
	reverse(temp.begin(),temp.end());
	answer=max(answer,temp[0]+temp[1]);
	return temp[0];
}
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n-1;i++){
		int node;
		int another_node;
		int d;
		scanf("%d%d%d",&node,&another_node,&d);
		v[node].push_back(pair<int,int>(another_node,d));
	}
	check[1]=1;
	dfs(1);
	printf("%d",answer);
}
