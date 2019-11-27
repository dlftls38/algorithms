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
vector<pair<int,int>>virus;
int board[60][60];
int ans=INF;
int m;
int virus_size;
int selected_virus[11];
int no_wall_cnt;
void solve(int virus_assign_cnt, int virus_pos){
	int i,j;
	if(virus_assign_cnt==m){
		int copy_board[60][60]={0};
		memcpy(copy_board,board,sizeof(board));
		int cnt=0;
		queue<pair<pair<int,int>,int>>q;
		for(i=0;i<m;i++){
			q.push({{virus[selected_virus[i]].first,virus[selected_virus[i]].second},0});
			copy_board[virus[selected_virus[i]].first][virus[selected_virus[i]].second]=1;
		}
		int max_time=0;
		while(!q.empty()){
			int y=q.front().first.first;
			int x=q.front().first.second;
			int time=q.front().second;
			max_time=max(max_time,time);
			cnt++;
			q.pop();
			if(copy_board[y+1][x]!=1){
				copy_board[y+1][x]=1;
				q.push({{y+1,x},time+1});
			}
			if(copy_board[y-1][x]!=1){
				copy_board[y-1][x]=1;
				q.push({{y-1,x},time+1});
			}
			if(copy_board[y][x+1]!=1){
				copy_board[y][x+1]=1;
				q.push({{y,x+1},time+1});
			}
			if(copy_board[y][x-1]!=1){
				copy_board[y][x-1]=1;
				q.push({{y,x-1},time+1});
			}
		}
		if(no_wall_cnt==cnt){
			ans=min(ans,max_time);
		}
		return;
	}
	for(i=virus_pos;i<virus_size;i++){
		selected_virus[virus_assign_cnt]=i;
		solve(virus_assign_cnt+1,i+1);
	}
}
int main(){
	int n;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<55;i++){
		for(j=0;j<55;j++){
			board[i][j]=1;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&board[i][j]);
			if(board[i][j]==2){
				virus.push_back({i,j});
			}
			if(board[i][j]!=1){
				no_wall_cnt++;
			}
		}
	}
	virus_size=virus.size();
	solve(0,0);
	printf("%d",ans==INF?-1:ans);
}
