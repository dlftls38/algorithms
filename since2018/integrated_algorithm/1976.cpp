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
int parent[201];
int level[201];
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
    for (int i = 1; i <= n; i++){
        parent[i] = i;
        level[i] = 1;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        	int check;
        	scanf("%d",&check);
        	if(check==1)
        		merge(i,j);
		}
    }
    int city[1001]={0};
    for(i=0;i<m;i++){
    	scanf("%d",&city[i]);
    	if(i>0){
    		if(find(city[i-1])!=find(city[i])){
    			printf("NO");
    			return 0;
			}
		}
	}
	printf("YES");
}
