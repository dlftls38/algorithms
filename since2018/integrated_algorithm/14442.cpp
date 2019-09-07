#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int n,m,k;
int a[1002][1002];
int ans[11][1002][1002];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int i,j;
int nx,ny;
struct s{
	int y;
	int x;
	int block;
};
void bfs(int y,int x,int block){
	queue<s>q;
	q.push({y,x,block});
	while(1){
		y=q.front().y;
		x=q.front().x;
		block=q.front().block;
		q.pop();
		for(i=0;i<4;i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx >= 1 && nx <= m && ny <= n && ny>=1 && a[ny][nx]==0 && (ans[block][ny][nx]==0 || ans[block][ny][nx]>ans[block][y][x]+1)){
				q.push({ny,nx,block});
				ans[block][ny][nx]=ans[block][y][x]+1;
			} 
		}
		if(block<k){
			for(i=0;i<4;i++){
				nx = x + dx[i];
				ny = y + dy[i];
				if(nx >= 1 && nx <= m && ny <= n && ny>=1 && a[ny][nx]==1 && (ans[block+1][ny][nx]==0 || ans[block+1][ny][nx]>ans[block][y][x]+1)){
					q.push({ny,nx,block+1});
					ans[block+1][ny][nx]=ans[block][y][x]+1;
				}
			}
		}
		if(q.empty()){
			break;
		}
	}
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(i=1;i<=n;i++){
		char s[1001]={0};
		scanf("%s",s);
		for(j=1;j<=m;j++){
			a[i][j]=s[j-1]-48;
		}
	}
	ans[0][1][1]=1;
	bfs(1,1,0);
	int result=INT_MAX;
	for(i=0;i<=k;i++){
		if(ans[i][n][m]!=0)
			result=min(ans[i][n][m],result);
	}
	if(result==INT_MAX){
		printf("-1");
	}
	else{
		printf("%d",result);
	}
}
