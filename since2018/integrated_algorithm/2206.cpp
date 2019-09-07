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
int n,m;
int a[1002][1002];
int ans[1002][1002];
int ansc[1002][1002];
vector<int>qy;
vector<int>qx;
vector<int>qc;
vector<int>qb;
int head,tail;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int i,j;
int nx,ny;
void bfs(int y,int x,int cost,int block){
	//printf("%d %d %d %d\n",y,x,cost,block);
	if(block==0){
		for(i=0;i<4;i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx >= 1 && nx <= m && ny <= n && ny>=1 && a[ny][nx]==0 && (ans[ny][nx]==0 || ans[ny][nx]>cost+1)){
				qy.push_back(ny);
				qx.push_back(nx);
				qc.push_back(cost+1);
				qb.push_back(block);
				ans[ny][nx]=cost+1;
				tail++;
			} 
		}
		for(i=0;i<4;i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx >= 1 && nx <= m && ny <= n && ny>=1 && a[ny][nx]==1 && (ansc[ny][nx]==0 || ansc[ny][nx]>cost+1)){
				qy.push_back(ny);
				qx.push_back(nx);
				qc.push_back(cost+1);
				qb.push_back(block+1);
				ansc[ny][nx]=cost+1;
				tail++;
			}
		}
	}
	else{
		for(i=0;i<4;i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx >= 1 && nx <= m && ny <= n && ny>=1 && a[ny][nx]==0 && (ansc[ny][nx]==0 || ansc[ny][nx]>cost+1)){
				qy.push_back(ny);
				qx.push_back(nx);
				qc.push_back(cost+1);
				qb.push_back(block);
				ansc[ny][nx]=cost+1;
				tail++;
			}
		}
	}
	if(head!=tail){
		head++;
		bfs(qy[head-1],qx[head-1],qc[head-1],qb[head-1]);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		char s[1001]={0};
		scanf("%s",s);
		for(j=1;j<=m;j++){
			a[i][j]=s[j-1]-48;
		}
	}
	ans[1][1]=1;
	bfs(1,1,1,0);
	if(ans[n][m]==0 && ansc[n][m]==0){
		printf("-1");
	}
	else if(ans[n][m]==0){
		printf("%d",ansc[n][m]);
	}
	else if(ansc[n][m]==0){
		printf("%d",ans[n][m]);
	}
	else{
		printf("%d",min(ans[n][m],ansc[n][m]));	
	}
}
