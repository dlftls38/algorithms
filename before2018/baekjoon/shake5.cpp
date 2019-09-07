#include <stdio.h>
#define N 100
#define INF 100000

int a[N+1][N+1];
int visit[N+1];
int dist[N+1];
int start, end;
int n,m;
// input �� sample
// ù��° ���ο��� ������ ����, �׸��� ���� ����, ���� ������ �Է�
// �ι�° ���ο��� ������ ������ �Է¹��� ����ġ�� ����(m)�� �Էµȴ�.
// ����° ���κ��ʹ� ������ ������ �Է¹��� ����ġ�� m���� ���´�.
/*
7 1 7
9
1 2 4
1 3 2
2 4 1
2 5 2
3 4 7
3 6 3
4 7 3
5 7 1
6 7 5
*/
void input(){
    int i,j;
    int from,to;
    int w;
	scanf("%d %d %d",&n,&start,&end);
	scanf("%d",&m);
 // �� �������� ���� ������ ����ġ�� ���Ѵ�� �ʱ�ȭ�Ѵ�.(�ּҰ��� ���ϱ�����)
	for ( i =1;i <=n; i++){
		for ( j =1; j <=n; j++){
	   		if ( i!= j){
                a[i][j] = INF;
			}
		}
	}
	for ( i =1;i <= m; i++) // �������� �������� ���� ������ ����ġ�� �Է�
	{
    	scanf("%d %d %d",&from,&to,&w);
    	a[from][to] =w;

    }
    for ( i =1;i <=n; i++){
		dist[i] = INF;
	}
}
void dijkstra()
{
    int i,j;
    int min;
	int v;
	dist[start] = 0;        // �������� �Ÿ� 0
   for ( i =1;i <=n; i++)
    {
        min = INF;       
        for ( j =1 ; j <=n; j++)
        {
			if ( visit[j] == 0 && min > dist[j])    // ���� �ִ� �����߿� ���� ����� ���� ����
			{
				min = dist[j];
                v = j;
            }

        }
		visit[v] = 1;   // ���� ����� �������� �湮, i�������� ���� ����� �ִܰ�� v
		for ( j = 1;j <= n; j++)      
        {
			if ( dist[j] > dist[v] + a[v][j]){       // �湮�� ������ ���� �ٸ� ���������� �Ÿ��� ª�������� ����Ͽ� �����Ȱ� ����
				dist[j] = dist[v] + a[v][j];
			}
		}
	}
}
int main(void)
{
	input();
	dijkstra();
	printf("%d \n",dist[end]);
	return 0;
}

