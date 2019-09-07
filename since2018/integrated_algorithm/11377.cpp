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
#define MAX_N 1001
 
using namespace std;
 
int n,m,k;
vector<int>adj[MAX_N];
int aMatch[MAX_N];
int bMatch[MAX_N];
int visit[MAX_N];
int visitCnt = 1;
set<pair<int,int> ,greater<pair<int,int> > >s;
bool dfs(int a)
{
    if (visit[a] == visitCnt)
        return false;
 
    visit[a] = visitCnt;
    int len=adj[a].size();
    for (int next = 0; next < len; next++)
    {	
        int b = adj[a][next];
        if (bMatch[b] == -1 || dfs(bMatch[b]))
        {
            aMatch[a] = b;
            bMatch[b] = a;
            
            return true;
        }
    }
 
    return false;
}
 
int bipartiteMatch()
{
    memset(aMatch, -1, sizeof(aMatch));
    memset(bMatch, -1, sizeof(bMatch));
 
    int size = 0;
    for (int start = 0; start < n; start++)
    {
	        visitCnt++;        
	        size += dfs(start);
    }
    int cnt=0;
    int len = s.size();
    for (auto start : s)
    {
	        visitCnt++;
			cnt += dfs(start.second);
			if(cnt==k){
				break;
			}
    }
    return size+cnt;
}
int main()
{	
	scanf("%d%d%d",&n,&m,&k);
	int i,j;
	for(i=0;i<n;i++){
		int h;
		scanf("%d",&h);
		s.insert({h,i});
		for(j=0;j<h;j++){
			int temp;
			scanf("%d",&temp);
			adj[i].push_back(temp-1);
		}
	}
	printf("%d",bipartiteMatch());
}
