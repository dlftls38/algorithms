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
const int MOD =  1000000007;

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
	long long n;
	scanf("%lld",&n);
	vector<vector<long long>> ans1(2, vector<long long>(2,0));
	vector<vector<long long>> arr1(2, vector<long long>(2,0));
	ans1[0][0]=1;
	ans1[1][1]=1;
	arr1[0][0]=1;
	arr1[0][1]=1;
	arr1[1][0]=1;
	long long nn=n;
	long long nnn=n;
	while (nn > 0)
	{
		if (nn % 2 == 1)
		{
			ans1 = matrix_mul(ans1, arr1);
		}
		arr1 = matrix_mul(arr1, arr1);
		nn /= 2;
	}
	vector<vector<long long>> ans2(2, vector<long long>(2,0));
	vector<vector<long long>> arr2(2, vector<long long>(2,0));
	ans2[0][0]=1;
	ans2[1][1]=1;
	arr2[0][0]=1;
	arr2[0][1]=1;
	arr2[1][0]=1;
	n++;
	while (n > 0)
	{
		if (n % 2 == 1)
		{
			ans2 = matrix_mul(ans2, arr2);
		}
		arr2 = matrix_mul(arr2, arr2);
		n /= 2;
	}
	long long res1=ans1[0][1];
	long long res2=ans2[0][1];
	//printf("%d->",res1);
	res1=(res1*res1)%MOD;
	//printf("%d\n",res1);
	//printf("%d->",res2);
	res2=(res2*res2)%MOD;
	//printf("%d\n",res2);
	if(nnn==1){
		printf("1");
		return 0;
	}
	if(nnn%2==1)
		printf("%d",(res2-res1+MOD+1)%MOD);
	else
		printf("%d",(res2-res1+MOD-1)%MOD);
}
