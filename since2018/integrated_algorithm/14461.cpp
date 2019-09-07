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
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n,t;
	scanf("%d%d",&n,&t);
	int i,j,k;
	int board[100][100];
	int val[3][100][100];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&board[i][j]);
			for(k=0;k<3;k++)
				val[k][i][j]=INF;
		}
	}
	queue<pair<pair<int,int>,pair<int,int> > >q;
	q.push({{0,0},{0,0}});
	val[0][0][0]=0;
	int ans=INF;
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int cnt=q.front().second.first;
		int cost=q.front().second.second;
		//printf("%d %d %d %d\n\n",y,x,cnt,cost);
		q.pop();
		if(y==n-1 && x==n-1){
			ans=min(ans,cost);
			continue;
		}
		if(y+1<n && val[cnt][y+1][x]>t+cost+cnt/2*board[y+1][x]){
			val[cnt][y+1][x]=t+cost+cnt/2*board[y+1][x];
			q.push({{y+1,x},{(cnt+1)%3,val[cnt][y+1][x]}});
		}
		if(x+1<n && val[cnt][y][x+1]>t+cost+cnt/2*board[y][x+1]){
			val[cnt][y][x+1]=t+cost+cnt/2*board[y][x+1];
			q.push({{y,x+1},{(cnt+1)%3,val[cnt][y][x+1]}});
		}
		if(y-1>=0 && val[cnt][y-1][x]>t+cost+cnt/2*board[y-1][x]){
			val[cnt][y-1][x]=t+cost+cnt/2*board[y-1][x];
			q.push({{y-1,x},{(cnt+1)%3,val[cnt][y-1][x]}});
		}
		if(x-1>=0 && val[cnt][y][x-1]>t+cost+cnt/2*board[y][x-1]){
			val[cnt][y][x-1]=t+cost+cnt/2*board[y][x-1];
			q.push({{y,x-1},{(cnt+1)%3,val[cnt][y][x-1]}});
		}
	}
	printf("%d",ans);
}
