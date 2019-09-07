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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int a[101][101]={0};
	int check[101][101]={0};
	int n,m;
	scanf("%d%d",&m,&n);
	int i,j;
	for(i=1;i<=n;i++){
		char line[101];
		scanf("%s",line);
		for(j=1;j<=m;j++){
			a[i][j]=line[j-1]-48;
			check[i][j]=INT_MAX;
		}
	}
	check[1][1]=0;
	queue<pair<pair<int,int>,int > >q;
	q.push({{1,1},0});
	int ans=INT_MAX;
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int cnt=q.front().second;
		q.pop();
		if(y==n && x==m){
			ans=min(ans,cnt);
		}
		if(y+1<=n && check[y+1][x]>cnt+a[y+1][x]){
			check[y+1][x]=cnt+a[y+1][x];
			q.push({{y+1,x},cnt+a[y+1][x]});
		}
		if(y-1>=1 && check[y-1][x]>cnt+a[y-1][x]){
			check[y-1][x]=cnt+a[y-1][x];
			q.push({{y-1,x},cnt+a[y-1][x]});
		}
		if(x+1<=m && check[y][x+1]>cnt+a[y][x+1]){
			check[y][x+1]=cnt+a[y][x+1];
			q.push({{y,x+1},cnt+a[y][x+1]});
		}
		if(x-1>=0 && check[y][x-1]>cnt+a[y][x-1]){
			check[y][x-1]=cnt+a[y][x-1];
			q.push({{y,x-1},cnt+a[y][x-1]});
		}
	}
	printf("%d",ans);
}
