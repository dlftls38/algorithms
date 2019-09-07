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
int a[102][102];
int check[102][102];
int ans=1;
void dfs(int y,int x){
	check[y][x]=1;
	if(a[y+1][x]>0 && check[y+1][x]==0){
		dfs(y+1,x);
	}
	if(a[y][x+1]>0 && check[y][x+1]==0){
		dfs(y,x+1);
	}
	if(a[y-1][x]>0 && check[y-1][x]==0){
		dfs(y-1,x);
	}
	if(a[y][x-1]>0 && check[y][x-1]==0){
		dfs(y,x-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=100;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				if(a[j][k]>0){
					a[j][k]--;
				}
			}
		}
		for(j=1;j<=n;j++){
			memset(check[j],0,sizeof(check[j]));
		}
		int count=0;
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				if(check[j][k]==0 && a[j][k]>0){
					dfs(j,k);
					count++;
				}
			}
		}
		ans=max(ans,count);
	}
	printf("%d",ans);
}
