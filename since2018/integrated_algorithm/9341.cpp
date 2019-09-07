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

using namespace std;
const int MOD =  1000000009;

vector<vector<long long>> matrix_mul(vector<vector<long long>>& a, vector<vector<long long>>& b){
	int i,j,k;
	int n = a.size();
	vector<vector<long long>> c(n, vector<long long>(n));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
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
		int i,j;
		long long a,b,c,d;
		scanf("%lld%lld%lld%lld", &a,&b,&c,&d);
		
		int SIZE = c+2;
		vector<vector<long long>> ans(SIZE, vector<long long>(SIZE,0));
		vector<vector<long long>> arr(SIZE, vector<long long>(SIZE,0));
		
		for(i = 0; i < SIZE; i++){
			ans[i][i] = 1;	                // 단위 행렬 
		}
		for(i = 0; i < SIZE; i++){
			for(j=0;j<i+1;j++){
				if(j!=1)
					arr[i][j]=1;                 // 점화식  
			}
		}
		arr[0][1]=1;
		
		d--;
		while (d > 0)
		{
			if (d % 2 == 1)
			{
				ans = matrix_mul(ans, arr);
			}
			arr = matrix_mul(arr, arr);
			d /= 2;
		}
		
		long long res=(ans[SIZE-1][0]*(b+MOD))%MOD;
		for(i=1;i<SIZE;i++){
			res+=ans[SIZE-1][i]*(a);
			res%=MOD;
		}
		printf("%lld\n",res);
	}
}
