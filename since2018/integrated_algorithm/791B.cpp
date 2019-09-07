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
int n,m;
vector<int>v[150001];
int ans=1;
int visit[150001];
long long sum;
long long node_count;
void dfs(int cur){
	visit[cur]=1;
	int size=v[cur].size();
	int suc=0;
	for(int i=0;i<size;i++){
		if(visit[v[cur][i]]==0){
			node_count++;
			sum+=v[v[cur][i]].size();
			dfs(v[cur][i]);
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		v[q].push_back(w);
		v[w].push_back(q);
	}
	for(i=1;i<=n;i++){
		if(visit[i]==0){
			node_count=1;
			sum=v[i].size();
			dfs(i);
			if(node_count*(node_count-1)!=sum){
				ans=0;
			}
		}
	}
	if(ans==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
