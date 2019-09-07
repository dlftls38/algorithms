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
using namespace std;
typedef pair<int,int> pii;
vector<pair<int,int> >tree[1001];
int check[1001];
void bfs(int s,int e){
	queue<pair<int,int> >q;
	q.push({s,0});
	check[s]=1;
	while(!q.empty()){
		int pos=q.front().first;
		int distance=q.front().second;
		q.pop();
		if(pos==e){
			printf("%d\n",distance);
			break;
		}
		int len=tree[pos].size();
		for(int i=0;i<len;i++){
			if(check[tree[pos][i].first]==0){
				check[tree[pos][i].first]=1;
				q.push({tree[pos][i].first,distance+tree[pos][i].second});
			}
		}
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<n;i++){
		int a,b,d;
		scanf("%d%d%d",&a,&b,&d);
		tree[a].push_back({b,d});
		tree[b].push_back({a,d});
	}
	for(i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		memset(check,0,sizeof(check));
		bfs(a,b);
	}
}
