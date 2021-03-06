#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
 
#define MAX 301
#define INF 987654321
 
using namespace std;
 
int main()
{
    int n,m;
    int c[MAX][MAX]; // capacity :: i->j로 가는 간선 용량
    int f[MAX][MAX]; // flow :: i->j로 현재 흐르고 있는 유량
 
    memset(c, 0, sizeof(c));
    memset(f, 0, sizeof(f));
 
    vector<int> adj[MAX];
    
    // 입력
    scanf("%d%d", &n,&m);
    for (int i = 0; i < m; i++)
    {
        int start,end,val;
        scanf(" %d %d %d", &start,&end,&val);
        c[start][end] += val; // 용량을 추가해준다.
        c[end][start] += val; 
        adj[start].push_back(end);
        adj[end].push_back(start); // 역방향 간선 추가
    }
 
    int totalFlow = 0, S = 1, T = n; // S :: source, T :: sink
 
    // 증가 경로를 못 찾을 때까지
    while (1)
    {
        int prev[MAX];
        memset(prev, -1, sizeof(prev));
 
        queue<int> q;
        // 싱크를 처음 push 해준다.
        q.push(S);
 
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
 
            for (int i = 0; i < adj[cur].size(); i++)
            {
                int next = adj[cur][i];
 
                // next를 방문하였다면 continue
                if (prev[next] != -1)
                    continue;
 
                // 아직 흐를 수 있는 유량이 있다면
                // 즉, cur -> next로 갈 수 있는 유량이 있다면
                if (c[cur][next] - f[cur][next] > 0)
                {
                    q.push(next);
 
                    // next의 경로 추적을 위해 저장
                    prev[next] = cur;
 
                    // 만약 next가 sink면 break
                    if (next == T)
                        break;
                }
            }
        }
 
        // source -> sink의 간선이 없다면 break;
        if (prev[T] == -1)
            break;
 
        int flow = INF;
 
        // 지금까지 구한 경로 상에서 가장 flow가 낮은 곳을 구한다.
        for (int i = T; i != S; i = prev[i])
            flow = min(flow, c[prev[i]][i] - f[prev[i]][i]);
        
        // 해당 경로에 flow를 보낸다.
        // 그리고 역방향으로는 flow를 빼준다.
        for (int i = T; i != S; i = prev[i])
        {
            f[prev[i]][i] += flow;
            f[i][prev[i]] -= flow;
        }
 
        totalFlow += flow;
    }
 
    printf("%d\n", totalFlow);
 
    return 0;
}
