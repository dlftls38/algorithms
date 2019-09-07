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
#define MOD 1000000007
using namespace std;
long long origin[2][2]={1,1,1,0};
long long (*recur(long long ans[][2],long long b))[2]{
	int i,j,k;
	if(b==0){
		ans[0][0]=1;
		ans[1][1]=1;
		return ans;
	}
	recur(ans,b/2);
	int temp[2][2]={0};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				temp[i][j]+=(ans[i][k]*ans[k][j])%MOD;
				temp[i][j]%=MOD;
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			ans[i][j]=temp[i][j]%MOD;
		}
	}
	if(b%2==1){
		long long temp2[5][5]={0};
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				for(k=0;k<2;k++){
					temp2[i][j]+=(ans[i][k]*origin[k][j])%MOD;
					temp2[i][j]%=MOD;
				}
			}
		}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				ans[i][j]=temp2[i][j]%MOD;
			}
		}
	}
	return ans;
}
int main(){
	long long b;
	scanf("%lld",&b);
	long long ans[2][2]={0};
	long long(* arr)[2] = recur(ans,b);
	printf("%lld",arr[0][1]);
}
