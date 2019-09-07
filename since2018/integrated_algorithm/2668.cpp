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
vector<int>v[101];
priority_queue<int,vector<int>,greater<int> >pq;
int suc;
int visit[101];
int ans[101];
void dfs(int start,int cur,int cnt){
	if(visit[cur]==1){
		if(cur!=start){
			return;
		}
		else{
			suc=1;
			return;
		}
	}
	visit[cur]=1;
	int size=v[cur].size();
	int i,j;
	for(i=0;i<size;i++){
		dfs(start,v[cur][i],cnt+1);
	}
	if(suc==1){
		pq.push(cur);
		ans[cur]=1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		int temp;
		scanf("%d",&temp);
		v[i].push_back(temp);
	}
	for(i=1;i<=n;i++){
		memset(visit,0,sizeof(visit));
		suc=0;
		if(ans[i]==0)
			dfs(i,i,0);
	}
	printf("%d\n",pq.size());
	int size=pq.size();
	for(i=0;i<size;i++){
		printf("%d\n",pq.top());
		pq.pop();
	}
}
