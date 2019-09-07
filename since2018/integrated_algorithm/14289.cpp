#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
#pragma warning(disable:4996)
const int INF = 1000000000;
const int MOD = 1000000007;

vector<vector<long long>> matrix_mul(vector<vector<long long>>& a, vector<vector<long long>>& b)
{
	int n = a.size();
	vector<vector<long long>> c(n, vector<long long>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				c[i][k] += a[i][j] * b[j][k];
				c[i][k] %= MOD;
			}
		}
	}
	return c;
}


int main(){
	int N;
	int M;
	int D;
	scanf("%d %d", &N, &M);
	vector<vector<long long>> ans(N, vector<long long>(N,0));
	vector<vector<long long>> arr(N, vector<long long>(N,0));
	for(int i=0;i<M;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		a--;
		b--;
		arr[a][b]=1;
		arr[b][a]=1;
	}
	scanf("%d",&D);
//	M++;
//	M++;
	for(int i = 0; i < N; i++){
		ans[i][i] = 1;	
	}
	while (D > 0)
	{
		if (D % 2 == 1)
		{
			ans = matrix_mul(ans, arr);
		}
		arr = matrix_mul(arr, arr);
		D /= 2;
	}
//	int res=0; 
//	for(int i = 0; i < N; i++){
//		for(int j = 0; j < N ; j++){
//			printf("%d ",ans[i][j]);
//		}
//		printf("\n");
//	}
//	for(int j = 0; j < N ; j++){
//		res+=ans[N-1][j];
//	}
	printf("%d",ans[0][0]);

	return 0;
}
