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
const int MOD = 1000000007;

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
			}
		}
	}
	return c;
}


int main(){
	while(1){
		int i,j;
		int a,b,c;
		scanf("%d %d %d",&a, &b, &c);
		int M=2;
		int N=c;
		vector<vector<long long>> ans(M, vector<long long>(M,0));
		vector<vector<long long>> arr(M, vector<long long>(M,0));
		if(a+b+c==0)break;
		
		for(i = 0; i < M; i++){
			ans[i][i] = 1;	
		}
		arr[0][0]=1;
		arr[0][1]=1;
		arr[1][0]=1;
		
		while (N > 0)
		{
			if (N % 2 == 1)
			{
				ans = matrix_mul(ans, arr);
			}
			arr = matrix_mul(arr, arr);
			N /= 2;
		}
		
		int res=0; 
//		for(i = 0; i < M; i++){
//			for(j = 0; j < M ; j++){
//				printf("%d ",ans[i][j]);
//			}
//			printf("\n");
//		}
		res=ans[0][0]*b+ans[0][1]*a;
		printf("%d\n",res);
	}
}
