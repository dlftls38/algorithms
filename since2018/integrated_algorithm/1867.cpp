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
#define MAX_N 501
 
using namespace std;
 
int n;
int adj[MAX_N][MAX_N];
int aMatch[MAX_N];
int bMatch[MAX_N];
int visit[MAX_N];
int visitCnt = 1;
 
bool dfs(int a)
{
    if (visit[a] == visitCnt)
        return false;
 
    visit[a] = visitCnt;
 
    for (int next = 0; next < n; next++)
    {
        if (adj[a][next])
        {
            int b = next;
            if (bMatch[b] == -1 || dfs(bMatch[b]))
            {
                aMatch[a] = b;
                bMatch[b] = a;
 
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
 
    for (int start = 0; start < n; start++)
    {
        visitCnt++;        
        size += dfs(start);
    }
 
    return size;
}
int main()
{	
	int k;
    scanf("%d%d",&n,&k);
    int i,j;
    for(i=0;i<k;i++){
    	int a,b;
    	scanf("%d%d",&a,&b);
    	a--;
    	b--;
    	adj[a][b]=1;
	}
    printf("%d",bipartiteMatch());
    
    return 0;
}
