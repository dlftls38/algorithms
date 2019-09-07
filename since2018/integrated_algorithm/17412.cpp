#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
 
#define MAX 401
#define INF 987654321
 
using namespace std;
 
int main()
{
    int n,p;
    int c[MAX][MAX]; // capacity :: i->j�� ���� ���� �뷮
    int f[MAX][MAX]; // flow :: i->j�� ���� �帣�� �ִ� ����
 
    memset(c, 0, sizeof(c));
    memset(f, 0, sizeof(f));
 
    vector<int> adj[MAX];
    
    // �Է�
    scanf("%d%d", &n,&p);
    for (int i = 0; i < n; i++)
    {
        int from,to,val=1;
        // \n ������ " %c�� �޴´�.
        scanf(" %d%d",&from,&to);
 
        c[from][to] += val; // �뷮�� �߰����ش�.
        c[to][from] += val; 
        adj[from].push_back(to);
        adj[to].push_back(from); // ������ ���� �߰�
    }
 
    int totalFlow = 0, S = 1, T = 2; // S :: source, T :: sink
 
    // ���� ��θ� �� ã�� ������
    while (1)
    {
        int prev[MAX];
        memset(prev, -1, sizeof(prev));
 
        queue<int> q;
        // ��ũ�� ó�� push ���ش�.
        q.push(S);
 
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
 
            for (int i = 0; i < adj[cur].size(); i++)
            {
                int next = adj[cur][i];
 
                // next�� �湮�Ͽ��ٸ� continue
                if (prev[next] != -1)
                    continue;
 
                // ���� �带 �� �ִ� ������ �ִٸ�
                // ��, cur -> next�� �� �� �ִ� ������ �ִٸ�
                if (c[cur][next] - f[cur][next] > 0)
                {
                    q.push(next);
 
                    // next�� ��� ������ ���� ����
                    prev[next] = cur;
 
                    // ���� next�� sink�� break
                    if (next == T)
                        break;
                }
            }
        }
 
        // source -> sink�� ������ ���ٸ� break;
        if (prev[T] == -1)
            break;
 
        int flow = INF;
 
        // ���ݱ��� ���� ��� �󿡼� ���� flow�� ���� ���� ���Ѵ�.
        for (int i = T; i != S; i = prev[i])
            flow = min(flow, c[prev[i]][i] - f[prev[i]][i]);
        
        // �ش� ��ο� flow�� ������.
        // �׸��� ���������δ� flow�� ���ش�.
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
