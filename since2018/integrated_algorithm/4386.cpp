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
int parent[100];
int level[100];
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
double dist(pair<double,double> a, pair<double,double> b){
	return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}
int main(){
	int i,j;
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        parent[i] = i;
        level[i] = 1;
    }
    pair<double,double>star[100];
    for(i=0;i<n;i++){
        scanf("%lf%lf",&star[i].first,&star[i].second);
    }
    priority_queue<pair<double,pair<int,int>>, vector<pair<double,pair<int,int>>>, greater<pair<double,pair<int,int>>>>pq;
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
    		pq.push({dist(star[i],star[j]),{i,j}});
		}
	}
	double ans=0;
	while(!pq.empty()){
		double val=pq.top().first;
		int u=pq.top().second.first;
		int v=pq.top().second.second;
		pq.pop();
		if(find(u)==find(v)){
			continue;
		}
		ans+=val;
		merge(u,v);
	}
	printf("%f",ans);
}
