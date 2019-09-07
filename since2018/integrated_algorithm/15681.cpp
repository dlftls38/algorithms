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
vector<int>link[100001];
int ans[100001];
int check[100001];
int r;
int dfs(int cur){
	check[cur]=1;
	int &res = ans[cur];
	int len=link[cur].size();
	if(len==1 && cur!=r){
		return res=1;
	}
	int i;
	for(i=0;i<len;i++){
		if(check[link[cur][i]]==0)
			res+=dfs(link[cur][i]);
	}
	return res+=1;
}
int main(){
	int n,q;
	scanf("%d%d%d",&n,&r,&q);
	int i,j;
	for(i=0;i<n-1;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		link[u].push_back(v);
		link[v].push_back(u);
	}
	dfs(r);
	for(i=0;i<q;i++){
		int u;
		scanf("%d",&u);
		printf("%d\n",ans[u]);
	}
}
