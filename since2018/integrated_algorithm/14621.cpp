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
#define MAX_SIZE 1000001
using namespace std;
int parent[1001];
int level[1001];
int find(int u){
    if (u == parent[u])
        return u;
    return parent[u] = find(parent[u]);
}
void merge(int u, int v){
    u = find(u);
    v = find(v);
    if (u == v){
        return;
    }
    if (level[u] > level[v])
        swap(u, v);
    parent[u] = v;
    if (level[u] == level[v])
        ++level[v];
}
int main(){
	int i,j;
    int n, m;
    scanf("%d %d", &n, &m);
    char sex[1001];
    for (i = 1; i <= n; i++){
    	char trash;
    	scanf("%c%c",&trash,&sex[i]);
        parent[i] = i;
        level[i] = 1;
    }
    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
    for(i=0;i<m;i++){
        int u, v, d;
        scanf("%d %d %d", &u, &v,&d);
        pq.push({d,{u,v}});
    }
    int ans=0;
    while(!pq.empty()){
    	int u=pq.top().second.first;
    	int v=pq.top().second.second;
    	int d=pq.top().first;
    	if(find(u)!=find(v) && sex[u]!=sex[v]){
    		ans+=d;
    		merge(u,v);
		}
		pq.pop();
	}
	for(i=1;i<n;i++){
		if(find(i)!=find(i+1)){
			printf("-1");
			return 0;
		}
	}
	printf("%d",ans);
}
