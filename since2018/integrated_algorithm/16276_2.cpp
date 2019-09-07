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
#define MAX_N 2501
 
using namespace std;
 
int n,m;
int adj[MAX_N][4];
int aMatch[MAX_N];
int bMatch[MAX_N];
int visit[MAX_N];
int visitCnt = 1;
 
bool dfs(int a)
{
    if (visit[a] == visitCnt)
        return false;
 
    visit[a] = visitCnt;
 
    for (int next = 0; next < 4; next++)
    {
        if (adj[a][next]>-1)
        {	
            int b = adj[a][next];
            //printf("%d %d %d\n",a,b,bMatch[b]);
            if (bMatch[b] == -1 || dfs(bMatch[b]))
            {
                aMatch[a] = b;
                bMatch[b] = a;
                //printf("%d %d\n", aMatch[a],bMatch[b]);
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
 
    for (int start = 0; start < n*m; start++)
    {
        visitCnt++;        
        size += dfs(start);
    }
 
    return size;
}
int main()
{	
	char a[51][51];
	int pos[51][51]={0};
	scanf("%d%d",&n,&m);
	int i,j;
	int all=0;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	memset(adj,-1,sizeof(adj));
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			pos[i][j]=i*m+j;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			int cur=pos[i][j];
			if(a[i][j]=='.')all++;
			if((i+j)%2==0){
				if(a[i][j]=='.'){
					if(a[i][j+1]=='.'){
						adj[cur][0]=cur+1;
					}
					if(a[i+1][j]=='.'){
						adj[cur][1]=cur+m;
					}
					if(j-1>=0 && a[i][j-1]=='.'){
						adj[cur][2]=cur-1;
					}
					if(i-1>=0 && a[i-1][j]=='.'){
						adj[cur][3]=cur-m;
					}
				}
			}
		}
	}
	int two=bipartiteMatch();
    printf("%d",all-two);
}
