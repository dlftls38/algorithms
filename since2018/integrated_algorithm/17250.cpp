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
int parent[100001];
int level[100001];
long long planet[100001];
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
    planet[v] += planet[u];
    if (level[u] == level[v])
        ++level[v];
}
int main(){
	int i,j;
    int n, m;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++){
        parent[i] = i;
        level[i] = 1;
    }
    for(i=1;i<=n;i++){
        scanf("%lld",&planet[i]);
    }
    for(i=0;i<m;i++){
        int s1, s2;
        scanf("%d %d", &s1, &s2);
        merge(s1, s2);
        printf("%lld\n",planet[find(s2)]);
    }
}
