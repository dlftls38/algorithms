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
vector<int>v[200001];
int answer[200001];
int ans;
void dfs(int cur_pos,int cur_col,int par_col){
	int size=v[cur_pos].size();
	int last=1;
	for(int i=0;i<size;i++){
		int node=v[cur_pos][i];
		if(answer[node]==0){
			while(1){
				if(last!=cur_col && last!=par_col){
					ans=max(ans,last);
					answer[node]=last++;
					break;
				}
				last++;
			}
			dfs(node,answer[node],cur_col);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n-1;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		v[q].push_back(w);
		v[w].push_back(q);
	}
	answer[1]=1;
	dfs(1,1,-1);
	printf("%d\n",ans);
	for(i=1;i<=n;i++){
		printf("%d ",answer[i]);
	}
}
