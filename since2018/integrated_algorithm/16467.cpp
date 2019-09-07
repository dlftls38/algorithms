#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
#pragma warning(disable:4996)
const int INF = 1000000000;
const int MOD = 100000007;

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
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int K;
		int N;
		scanf("%d %d", &K, &N);
//		M++;
//		M++;
		int SIZE=K+1;
		vector<vector<long long>> ans(SIZE, vector<long long>(SIZE,0));
		vector<vector<long long>> arr(SIZE, vector<long long>(SIZE,0));
		for(int i = 0; i < SIZE; i++){
			ans[i][i] = 1;	
		}
		arr[0][0]=1;
		arr[0][K]++;
		for(int i=1;i<K+1;i++){
			arr[i][i-1]=1;
		}
		while (N > 0)
		{
			if (N % 2 == 1)
			{
				ans = matrix_mul(ans, arr);
			}
			arr = matrix_mul(arr, arr);
			N /= 2;
		}
//		printf("\n------------------\n\n\n");
//		for(int i = 0; i < SIZE; i++){
//			for(int j = 0; j < SIZE ; j++){
//				printf("%d ",ans[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n\n\n------------------\n");
		printf("%d\n",ans[0][0]);
	}
}
