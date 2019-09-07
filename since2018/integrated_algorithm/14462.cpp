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
 
int n;
vector<int>adj[MAX_N];
int aMatch[MAX_N];
int bMatch[MAX_N];
int visit[MAX_N];
int visitCnt = 1;
int dleft[MAX_N];
int dright[MAX_N];
int cur;
bool dfs(int a)
{
    if (visit[a] == visitCnt)
        return false;
 
    visit[a] = visitCnt;
 	int len=adj[a].size();
    for (int next = 0; next < len; next++)
    {
        if (cur<adj[a][next])
        {
            int b = adj[a][next];
            if (bMatch[b] == -1 || dfs(bMatch[b]))
            {
                aMatch[a] = b;
                bMatch[b] = a;
 				cur=adj[a][next];
                return true;
            }
        }
    }
 
    return false;
}
 
int bipartiteMatch()
{
    memset(aMatch, -1, sizeof(aMatch));
    memset(bMatch, -1, sizeof(bMatch));
 
    int size = 0;
 
    for (int start = 1; start <= n; start++)
    {
        visitCnt++;        
        size += dfs(start);
    }
 
    return size;
}
int main()
{	
	
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
    	scanf("%d",&dleft[i]);
	}
	for(i=1;i<=n;i++){
    	scanf("%d",&dright[i]);
	}
	for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		if(abs(dleft[i]-dright[j])<=4){
    			adj[i].push_back(j);
			}
		}
	}
    printf("%d",bipartiteMatch());
}
