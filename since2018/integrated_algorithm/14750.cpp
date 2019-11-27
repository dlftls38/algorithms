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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
    long long op = 1LL*a.first*b.second + 1LL*b.first*c.second + 1LL*c.first*a.second;
    op -= (1LL*a.second*b.first + 1LL*b.second*c.first + 1LL*c.second*a.first);
    if (op > 0)return 1;
    else if (op == 0)return 0;
    else return -1;
}
int isIntersect(pair<pair<int, int>, pair<int, int>> x, pair<pair<int, int>, pair<int, int>> y) {
    pair<int, int> a = x.first;
    pair<int, int> b = x.second;
    pair<int, int> c = y.first;
    pair<int, int> d = y.second;
    int ab = ccw(a, b, c)*ccw(a, b, d);
    int cd = ccw(c, d, a)*ccw(c, d, b);
    if (ab == 0 && cd == 0) {
        if (a > b)swap(a, b);
        if (c > d)swap(c, d);
        return c <= b&&a <= d;
    }
    return ab <= 0 && cd <= 0;
}
int n,k,h,m;
vector<pair<int,int>>wall;
vector<pair<int,int>>hole;
vector<pair<int,int>>mice;
vector<int>link[300];
const int MAX_N = 300;
int aMatch[MAX_N];
int bMatch[MAX_N][MAX_N];
int visit[MAX_N];
int visitCnt = 1;
int counts[MAX_N];
bool dfs(int a)
{
    if (visit[a] == visitCnt)
        return false;
 
    visit[a] = visitCnt;
 	int size = link[a].size();
    for (int next = 0; next < size; next++){
        int b = link[a][next];
        if (counts[b]<k)
        {	
            aMatch[a] = b;
			bMatch[b][counts[b]]=a;
			counts[b]++;
            return true;
        }
        int other_size = counts[b];
        for(int other = 0; other<other_size; other++){
        	if(dfs(bMatch[b][other])){
	            aMatch[a] = b;
				bMatch[b][other]=a;
				return true;
			}
		}
    }
 
    return false;
}
 
int bipartiteMatch()
{
 
    int size = 0;
 
    for (int start = 0; start < m; start++)
    {
        visitCnt++;        
        size += dfs(start);
    }
 
    return size;
}

int main(){
	cin>>n>>k>>h>>m;
	if(n<3){
		printf("Impossible");
		return 0;
	}
	int i,j,l;
	int x,y;
	for(i=0;i<n;i++){
		cin>>x>>y;
		wall.push_back({x,y});
		if(i==n-1){
			wall.push_back({wall[0].first,wall[0].second});	
		}
	}
	int check[50]={0};
	for(i=0;i<h;i++){
		cin>>x>>y;
		hole.push_back({x,y});
		for(j=0;j<n;j++){
			if(hole[i].first==wall[j].first && hole[i].second==wall[j].second){
				check[i]=1;
			}
		}
	}
	for(i=0;i<m;i++){
		cin>>x>>y;
		mice.push_back({x,y});
	}
	for(i=0;i<m;i++){
		for(j=0;j<h;j++){
			int flag = 0;
			for(l=0;l<n;l++){
				//printf("%d %d  %d %d  %d %d %d %d\n",hole[j].first,hole[j].second,mice[i].first,mice[i].second,wall[l].first,wall[l].second,wall[l+1].first,wall[l+1].second);
				if(isIntersect({{hole[j].first,hole[j].second},{mice[i].first,mice[i].second}},{{wall[l].first,wall[l].second},{wall[l+1].first,wall[l+1].second}})){
					flag++;
					//printf("wrong!! %d %d  %d %d  %d %d %d %d\n",hole[j].first,hole[j].second,mice[i].first,mice[i].second,wall[l].first,wall[l].second,wall[l+1].first,wall[l+1].second);
					if(flag==3)break;
				}
			}
			if(flag==1){
				link[i].push_back(j);
			}
			else if(flag==2 && check[j]){
				link[i].push_back(j);
			}
		}
	}
//	for(i=0;i<m;i++){
//		printf("m : %d = ",i);
//		for(j=0;j<link[i].size();j++){
//			printf("%d ",link[i][j]);
//		}
//		printf("\n");
//	}
	if(bipartiteMatch()==m){
		printf("Possible");
	}
	else{
		printf("Impossible");
	}
}
/*
4 1 1 1
0 0
100 0
0 100
100 100
0 0
50 50
*/
