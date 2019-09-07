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
vector <pair<int,int> >virus;
vector <pair<int,int> >wall;
int a[10][10];
int check[10][10];
int n,m;
int dfs(int y,int x){
	int sum=1;
	check[y][x]=1;
	if(y+1<= n && a[y+1][x]==0 && check[y+1][x]==0){
		sum+=dfs(y+1,x);
	}
	if(x+1<= m && a[y][x+1]==0 && check[y][x+1]==0){
		sum+=dfs(y,x+1);
	}
	if(y-1>= 1 && a[y-1][x]==0 && check[y-1][x]==0){
		sum+=dfs(y-1,x);
	}
	if(x-1>= 1 && a[y][x-1]==0 && check[y][x-1]==0){
		sum+=dfs(y,x-1);
	}
	return sum;
}
int recur(){
	int ans=0;
	for(int i=0;i<10;i++)
		fill(check[i],check[i]+10,0);
	for(int i=0;i<virus.size();i++){
		if(check[virus[i].first][virus[i].second]==0){
			ans+=dfs(virus[i].first,virus[i].second);
		}
	}
	return ans;
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				wall.push_back(make_pair(i,j));
			}
			if(a[i][j]==2){
				virus.push_back(make_pair(i,j));
			}
		}
	}
	int ans=0;
	int wall_size=wall.size();
	int virus_size=virus.size();
	for(i=0;i<wall_size;i++){
		for(j=i+1;j<wall_size;j++){
			for(k=j+1;k<wall_size;k++){
				a[wall[i].first][wall[i].second]=1;
				a[wall[j].first][wall[j].second]=1;
				a[wall[k].first][wall[k].second]=1;
				ans=max(ans, wall_size -3 - recur() + virus_size);
				a[wall[i].first][wall[i].second]=0;
				a[wall[j].first][wall[j].second]=0;
				a[wall[k].first][wall[k].second]=0;
			}
		}
	}
	printf("%d",ans);
}
