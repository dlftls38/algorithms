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
pair<int,int> parent[10001];
int level[10001];
int check[10001];
int find(int u){
    if (u == parent[u].first)
        return u;
    return  parent[u].first=find(parent[u].first);
}
void merge(int u, int v){
    u = find(u);
    v = find(v);
    if (u == v){
        return;
    }
    if (level[u] > level[v])
        swap(u, v);
    parent[u].first = v;
    parent[v].second=min(parent[v].second,parent[u].second);
    if (level[u] == level[v])
        ++level[v];
}
int main(){
	int i,j;
    int n, m,k;
    scanf("%d %d %d", &n, &m,&k);
    for (i = 1; i <= n; i++){
    	scanf("%d",&parent[i].second);
        parent[i].first = i;
        level[i] = 1;
    }
    for(i=0;i<m;i++){
        int v, w;
        scanf("%d %d", &v, &w);
        merge(v, w);
    }
    int sum=0;
    for(i=1;i<=n;i++){
    	if(check[parent[find(i)].first]==0){
    		check[parent[find(i)].first]=1;
    		sum+=parent[find(i)].second;
		}
	}
	if(sum<=k){
		printf("%d",sum);
	}
	else{
		printf("Oh no");
	}
}
