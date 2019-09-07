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
 
int n,m;
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
 
    for (int next = 1; next <= n; next++)
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
    memset(visit, 0, sizeof(visit));
    visitCnt=1;
    int size = 0;
 
    for (int start = 1; start <= m; start++)
    {
        visitCnt++;        
        size += dfs(start);
    }
 
    return size;
}
int main()
{	
	int tc;
	scanf("%d",&tc);
	while(tc--){
		scanf("%d%d",&n,&m);
		int i,j;
		memset(adj,0,sizeof(adj));
		for(i=1;i<=m;i++){
			int a,b;
			scanf("%d%d",&a,&b);
			for(j=a;j<=b;j++){
				adj[i][j]=1;
			}
		}
		printf("%d\n",bipartiteMatch());
	}
}
