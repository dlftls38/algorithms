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
struct node{
	int x=1000000,number=0,left_cnt=0,right_cnt=0;
	node *left_child=NULL;
	node *right_child=NULL;
	node *parent=NULL;
}nodes[10001];
vector<int>level[10001];
int dfs(int cur,int depth){
	level[depth].push_back(cur);
	if(nodes[cur].left_child!=NULL){
		nodes[cur].left_cnt+=dfs(nodes[cur].left_child->number,depth+1);
	}
	if(nodes[cur].right_child!=NULL){
		nodes[cur].right_cnt+=dfs(nodes[cur].right_child->number,depth+1);
	}
	return nodes[cur].left_cnt+nodes[cur].right_cnt+1;
}
void dfs_left(int cur){
	if(nodes[cur].parent->left_child==&nodes[cur]){
		nodes[cur].x=nodes[cur].parent->x-1-nodes[cur].right_cnt;
	}
	else{
		nodes[cur].x=nodes[cur].parent->x+1+nodes[cur].left_cnt;
	}
	if(nodes[cur].left_child!=NULL){
		dfs_left(nodes[cur].left_child->number);
	}
	if(nodes[cur].right_child!=NULL){
		dfs_left(nodes[cur].right_child->number);
	}
}
void dfs_right(int cur){
	if(nodes[cur].parent->left_child==&nodes[cur]){
		nodes[cur].x=nodes[cur].parent->x-1-nodes[cur].right_cnt;
	}
	else{
		nodes[cur].x=nodes[cur].parent->x+1+nodes[cur].left_cnt;
	}
	if(nodes[cur].left_child!=NULL){
		dfs_right(nodes[cur].left_child->number);
	}
	if(nodes[cur].right_child!=NULL){
		dfs_right(nodes[cur].right_child->number);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		nodes[a].number=a;
		if(b!=-1){
			nodes[a].left_child=&nodes[b];
			nodes[b].parent=&nodes[a];
		}
		if(c!=-1){
			nodes[a].right_child=&nodes[c];
			nodes[c].parent=&nodes[a];
		}
	}
	int cur=1;
	while(nodes[cur].parent!=NULL){
		cur=nodes[cur].parent->number;
	}
	dfs(cur,1);
	if(nodes[cur].left_child!=NULL)
		dfs_left(nodes[cur].left_child->number);
	if(nodes[cur].right_child!=NULL)
		dfs_right(nodes[cur].right_child->number);
	for(i=1;i<=n;i++){
		int size=level[i].size();
		for(j=0;j<size;j++){
			level[i][j]=nodes[level[i][j]].x;
		}
		sort(level[i].begin(),level[i].end());
	}
	int ans=1;
	int ans_level=1;
	for(i=1;i<=n;i++){
		int size=level[i].size();
		if(size>0 && ans<abs(level[i][0]-level[i][size-1])+1){
			ans=abs(level[i][0]-level[i][size-1])+1;
			ans_level=i;
		}
	}
	printf("%d %d",ans_level,ans);
}
