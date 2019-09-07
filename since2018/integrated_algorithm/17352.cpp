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
int parent[300001];
int level[300001];
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
    for(i=0;i<n-2;i++){
        int s1, s2;
        scanf("%d %d", &s1, &s2);
        merge(s1, s2);
    }
    set<int>s;
    for(i=1;i<=n;i++){
    	s.insert(find(i));
	}
	for(auto it : s){
		printf("%d ",it);
	}
}
