#include <iostream>
#include <cstdio>
#include <vector>
#include <memory.h>
 
#define MAX_N 10001
using namespace std;
 
int n, m;
int aMatch[MAX_N];
int bMatch[MAX_N];
vector<int> adj[MAX_N];
 
int visit[MAX_N];
int visitCnt;
 
char map[101][101];
int cArr[101][101];
int rArr[101][101];
 
bool chkNum[MAX_N];
 
int num = 1;
 
bool dfs(int a)
{
    if (visit[a] == visitCnt)
        return false;
 
    visit[a] = visitCnt;
 
    for (int i = 0; i < adj[a].size(); i++)
    {
        int b = adj[a][i];
 
        if (bMatch[b] == -1 || dfs(bMatch[b]))
        {
            bMatch[b] = a;
            aMatch[a] = b;
 
            return true;
        }
        
    }
    return false;
}
 
int bipartiteMatch()
{
    memset(aMatch, -1, sizeof(aMatch));
    memset(bMatch, -1, sizeof(bMatch));
 
    int ans = 0;
 
    for (int start = 1; start <= num; start++)
    {
        visitCnt++;
        ans += dfs(start);
    }
 
    return ans;
}
int main()
{
    scanf("%d %d", &n, &m);
 	int board[101][101]={0};
 	int i,j;
 	for(i=0;i<n;i++){
 		for(j=0;j<m;j++){
 			scanf("%d",&board[i][j]);
		}
	}
    for(i=0;i<n;i++){
 		for(j=0;j<m;j++){
 			if(board[i][j]==0){
 				map[i][j]='*';
			}
			else if(board[i][j]==1){
 				map[i][j]='-';
			}
			else{
				map[i][j]='.';
			}
		}
	}
	
 
 
    // 행 먼저 넘버링
    for (int i = 0; i < n; i++)
    {
        if(chkNum[num])
            num++;
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == '*')
            {
                cArr[i][j] = num;
                chkNum[num] = true;
            }
            else if(map[i][j] == '.')
                if (chkNum[num])
                    num++;
        }
    }
 
    int tmp = num;
    num = 1;
    memset(chkNum, false, sizeof(chkNum));
    // 열 넘버링
    for (int i = 0; i < m; i++)
    {
        if (chkNum[num])
            num++;
        for (int j = 0; j < n; j++)
        {
            if (map[j][i] == '*')
            {
                rArr[j][i] = num;
                chkNum[num] = true;
            }
            else if (map[j][i] == '.')
                if (chkNum[num])
                    num++;
        }
    }
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (cArr[i][j] != 0)
                adj[cArr[i][j]].push_back(rArr[i][j]);
 
    if (tmp > num)
        num = tmp;
    printf("%d", bipartiteMatch());
 
    return 0;
}
