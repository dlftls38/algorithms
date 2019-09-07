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
	long long N;
	int M;
	scanf("%lld %d", &M, &N);
	M++;
	M++;
	vector<vector<long long>> ans(M, vector<long long>(M,0));
	vector<vector<long long>> arr(M, vector<long long>(M,0));

	
	for(int i = 0; i < M; i++){
		ans[i][i] = 1;	 
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < M - i ; j++){
			arr[i+j][j]=1;  
		}
	}
	while (N > 0)
	{
		if (N % 2 == 1)
		{
			ans = matrix_mul(ans, arr);
		}
		arr = matrix_mul(arr, arr);
		N /= 2;
	} ¤» 
	int res=0; 
	for(int i = 0; i < M; i++){
		for(int j = 0; j < M ; j++){
			printf("%d ",ans[i][j]);
		}
		printf("\n");  
	}
	for(int j = 0; j < M ; j++){
		res+=ans[M-1][j];
	}
	printf("%d",ans[M-1][0]);

	return 0;
}
