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
#define MAX_SIZE 100001
using namespace std;
pair<int,int> parent[MAX_SIZE];
int level[MAX_SIZE];
int find(int u){
    if (u == parent[u].first)
        return u;
    return parent[u].first = find(parent[u].first);
}
void merge(int u,int v){
    u = find(u);
    v = find(v);
    if (u == v){
        return;
    }
    if (level[u] > level[v])
        swap(u, v);
    parent[u].first = v;
    if (level[u] == level[v])
        ++level[v];
    parent[v].second+=parent[u].second;
}
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int i,j;
	    int n;
	    scanf("%d", &n);
	    map<string,int>numbering;
	    int cnt=1;
	    for(i=0;i<n;i++){
	        char s1[21],s2[21];
	        scanf("%s%s",s1,s2);
	        if(numbering[s1]==0){
	        	numbering[s1]=cnt;
	        	level[cnt]=1;
	        	parent[cnt].first=cnt;
	        	parent[cnt].second=1;
	        	cnt++;
			}
			if(numbering[s2]==0){
	        	numbering[s2]=cnt;
	        	level[cnt]=1;
	        	parent[cnt].first=cnt;
	        	parent[cnt].second=1;
	        	cnt++;
			}
	        merge(numbering[s1], numbering[s2]);
	        printf("%d\n",parent[find(numbering[s1])].second);
	    }
	}
}
