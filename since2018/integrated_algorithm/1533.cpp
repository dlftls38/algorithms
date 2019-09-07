#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
#pragma warning(disable:4996)
const int INF = 1000000000;
const int MOD = 1000003;

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
	int N,S,E,T;
	scanf("%d%d%d%d", &N, &S,&E,&T);
	int SIZE=N+4*N;
	vector<vector<long long>> ans(SIZE, vector<long long>(SIZE,0));
	vector<vector<long long>> arr(SIZE, vector<long long>(SIZE,0));
	char temp[11][11];
	for(int i=0;i<N;i++){
		scanf("%s",temp[i]);
		for(int j=0;j<N;j++){
			arr[i][j]=temp[i][j]-48;
		}
	}
	for(int i = 0; i < SIZE; i++){
		ans[i][i] = 1;	
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N  ; j++){
			if(arr[i][j]==2){
				arr[i][j]=0;
				arr[i][N+i*4]=1;
				arr[N+i*4][j]=1;
			}
			if(arr[i][j]==3){
				arr[i][j]=0;
				arr[i][N+i*4]=1;
				arr[N+i*4][N+i*4+1]=1;
				arr[N+i*4+1][j]=1;
			}
			if(arr[i][j]==4){
				arr[i][j]=0;
				arr[i][N+i*4]=1;
				arr[N+i*4][N+i*4+1]=1;
				arr[N+i*4+1][N+i*4+2]=1;
				arr[N+i*4+2][j]=1;
			}
			if(arr[i][j]==5){
				arr[i][j]=0;
				arr[i][N+i*4]=1;
				arr[N+i*4][N+i*4+1]=1;
				arr[N+i*4+1][N+i*4+2]=1;
				arr[N+i*4+2][N+i*4+3]=1;
				arr[N+i*4+3][j]=1;
			}
		}
	}
	while (T > 0)
	{
		if (T % 2 == 1)
		{
			ans = matrix_mul(ans, arr);
		}
		arr = matrix_mul(arr, arr);
		T /= 2;
	}
//	for(int i = 0; i < SIZE; i++){
//		for(int j = 0; j < SIZE ; j++){
//			printf("%d ",ans[i][j]);
//		}
//		printf("\n");
//	}
	printf("%d",ans[S-1][E-1]);
	return 0;
}
