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
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        parent[i] = i;
        level[i] = 1;
    }
    priority_queue<pair<int,pair<int,int> > ,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int>  > > >pq;
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		int x;
    		scanf("%d",&x);
    		pq.push({x,{i+1,j+1}});
		}
    }
    long long ans=0;
    for(i=0;i<n*n;i++){
    	int cost=pq.top().first;
    	int a=pq.top().second.first;
    	int b=pq.top().second.second;
    	pq.pop();
    	if(find(a)==find(b)){
    		continue;
		}
		else{
			merge(a,b);
			ans+=cost;
		}
	}
	printf("%lld",ans);
}
