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
typedef pair<int, int> pii;
pii parent[300001];
int level[300001];
int find(int u){
    if (u == parent[u].first)
        return u;
    return parent[u].first = find(parent[u].first);
}
void merge(int u, int v){
    u = find(u);
    v = find(v);
    if (u == v){
        if (parent[v].second < 1)
            printf("SMECE\n");
        else{
            parent[v].second--;
            printf("LADICA\n");
        }
        return;
    }
    if (level[u] > level[v])
        swap(u, v);
    parent[u].first = v;
    if (level[u] == level[v])
        ++level[v];
    if (parent[v].second + parent[u].second < 1)
        printf("SMECE\n");
    else{
        parent[v].second += parent[u].second - 1;
        printf("LADICA\n");
    }
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++){
        parent[i].first = i;
        parent[i].second = 1;
        level[i] = 1;
    }
    while (n--){
        int s1, s2;
        scanf("%d %d", &s1, &s2);
        merge(s1, s2);
    }
}
