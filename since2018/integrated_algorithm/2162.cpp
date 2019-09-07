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
using namespace std;
pair< pair<double,double>,pair<double,double> >line[3000];
int ccw( pair<double, double> a,  pair<double, double> b,  pair<double, double> c){
	double x1 = a.first;
	double y1 = a.second;
	double x2 = b.first;
	double y2 = b.second;
	double x3 = c.first;
	double y3 = c.second;
    double temp = x1*y2+x2*y3+x3*y1;
    temp = temp - y1*x2-y2*x3-y3*x1;
    if (temp > 0) {
        return 1;
    } else if (temp < 0) {
        return -1;
    } else {
        return 0;
    }
}
int isintersect(pair<pair<double, double>, pair<double, double>> x, pair<pair<double, double>, pair<double, double>> y) {
    pair<double, double> a = x.first;
    pair<double, double> b = x.second;
    pair<double, double> c = y.first;
    pair<double, double> d = y.second;
    int ab = ccw(a, b, c)*ccw(a, b, d);
    int cd = ccw(c, d, a)*ccw(c, d, b);
    if (ab == 0 && cd == 0) {
        if (a > b)swap(a, b);
        if (c > d)swap(c, d);
        return c <= b&&a <= d;
    }
    return ab <= 0 && cd <= 0;
}
pair<int,int> parent[3000];
int level[3000];
int find(int u){
    if (u == parent[u].first)
        return u;
    return parent[u].first = find(parent[u].first);
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
    parent[v].second += parent[u].second;
    if (level[u] == level[v])
        ++level[v];
    
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for (int i = 0; i < n; i++){
        parent[i].first = i;
        parent[i].second = 1;
        level[i] = 1;
    }
	for(i=0;i<n;i++){
		double x1,y1,x2,y2;
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		line[i]={{x1,y1},{x2,y2}};
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(isintersect(line[i],line[j])){
				merge(i,j);
			}
		}
	}
	set<int>s;
	int ans=0;
	for(i=0;i<n;i++){
		s.insert(find(i));
		ans=max(parent[i].second,ans);
	}
	printf("%d\n%d",s.size(),ans);
}
