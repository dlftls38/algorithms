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
#define MAX_VALUE 1000000000
#define MOD 100
using namespace std;

vector<vector<long long>> matrix_mul(vector<vector<long long>>& a, vector<vector<long long>>& b){
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
	int x,y,a0,a1,n;
	scanf("%d%d%d%d%d",&x,&y,&a0,&a1,&n);
	
	int SIZE=2;
	vector<vector<long long>> ans(SIZE, vector<long long>(SIZE,0));
	vector<vector<long long>> arr(SIZE, vector<long long>(SIZE,0));
	
	arr[0][0]=x;
	arr[0][1]=y;
	arr[1][0]=1;
	arr[1][1]=0;
	
	ans[0][0]=1;
	ans[0][1]=0;
	ans[1][0]=0;
	ans[1][1]=1;
	n--;
	while (n > 0){
		if (n % 2 == 1){
			ans = matrix_mul(ans, arr);
		}
		arr = matrix_mul(arr, arr);
		n /= 2;
	}
	
//	for(int i = 0; i < SIZE; i++){
//		for(int j = 0; j < SIZE ; j++){
//			printf("%d ",ans[i][j]);
//		}
//		printf("\n");
//	}
	int res = ans[0][0]*a1 + ans[0][1]*a0;
	res%=MOD;
	if(res<10){
		printf("0%d",res);
	}
	else{
		printf("%d",res);
	}
	return 0;
}
