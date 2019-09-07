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
using namespace std;
int origin[5][5],n;
int (*recur(int ans[][5],long long b))[5]{
	int i,j,k;
	if(b==0){
		for(i=0;i<n;i++){
			ans[i][i]=1;
		}
		return ans;
	}
	recur(ans,b/2);
	int temp[5][5]={0};
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				temp[i][j]+=ans[i][k]*ans[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			ans[i][j]=temp[i][j]%1000;
		}
	}
	if(b%2==1){
		int temp2[5][5]={0};
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				for(k=0;k<n;k++){
					temp2[i][j]+=ans[i][k]*origin[k][j];
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				ans[i][j]=temp2[i][j]%1000;
			}
		}
	}
	return ans;
}
int main(){
	long long b;
	scanf("%d%lld",&n,&b);
	int i,j;
	int ans[5][5]={0};
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&origin[i][j]);
		}
	}
	int(* arr)[5] = recur(ans,b);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
