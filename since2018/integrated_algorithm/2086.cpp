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
const int MOD =  1000000000;

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
	long long i,j;
	long long a,b;
	scanf("%lld%lld",&a,&b);
	a--;
	a+=2;
	b+=2;
	vector<vector<long long>> ans1(2, vector<long long>(2,0));
	vector<vector<long long>> arr1(2, vector<long long>(2,0));
	ans1[0][0]=1;
	ans1[1][1]=1;
	arr1[0][0]=1;
	arr1[0][1]=1;
	arr1[1][0]=1;
	while (a > 0)
	{
		if (a % 2 == 1)
		{
			ans1 = matrix_mul(ans1, arr1);
		}
		arr1 = matrix_mul(arr1, arr1);
		a /= 2;
	}
	vector<vector<long long>> ans2(2, vector<long long>(2,0));
	vector<vector<long long>> arr2(2, vector<long long>(2,0));
	ans2[0][0]=1;
	ans2[1][1]=1;
	arr2[0][0]=1;
	arr2[0][1]=1;
	arr2[1][0]=1;
	while (b > 0)
	{
		if (b % 2 == 1)
		{
			ans2 = matrix_mul(ans2, arr2);
		}
		arr2 = matrix_mul(arr2, arr2);
		b /= 2;
	}
	int res1=ans1[0][1]-1;
	int res2=ans2[0][1]-1;
	printf("%d",(res2-res1+MOD)%MOD);
}
