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
	int N=8;
	int D;
	vector<vector<long long>> ans(N, vector<long long>(N,0));
	vector<vector<long long>> arr(N, vector<long long>(N,0));
	scanf("%d",&D);
	for(int i = 0; i < N; i++){
		ans[i][i] = 1;	
	}
	arr[0][1]=1;
	arr[1][0]=1;
	arr[0][2]=1;
	arr[2][0]=1;
	arr[1][2]=1;
	arr[2][1]=1;
	arr[1][3]=1;
	arr[3][1]=1;
	arr[2][3]=1;
	arr[3][2]=1;
	arr[2][4]=1;
	arr[4][2]=1;
	arr[3][4]=1;
	arr[4][3]=1;
	arr[4][5]=1;
	arr[5][4]=1;
	arr[3][5]=1;
	arr[5][3]=1;
	arr[5][7]=1;
	arr[7][5]=1;
	arr[6][7]=1;
	arr[7][6]=1;
	arr[4][6]=1;
	arr[6][4]=1;
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
