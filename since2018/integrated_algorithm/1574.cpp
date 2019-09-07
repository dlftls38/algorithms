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
#define MAX_N 301
 
using namespace std;
 
int r,c;
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
 
    for (int next = 0; next < c; next++)
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
 
    for (int start = 0; start < r; start++)
    {
        visitCnt++;        
        size += dfs(start);
    }
 
    return size;
}
int main()
{	
	int n;
    scanf("%d%d%d",&r,&c,&n);
    int i,j;
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		adj[i][j]=1;
		}
	}
    for(i=0;i<n;i++){
    	int a,b;
    	scanf("%d%d",&a,&b);
    	a--;
    	b--;
    	adj[a][b]=0;
	}
    printf("%d",bipartiteMatch());
    
    return 0;
}
