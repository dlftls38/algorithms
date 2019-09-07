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
int n,m;
vector<pair<int,int> >virus;
vector<pair<int,int> >wall;
int sum;
int selected[10];
int ans=INT_MAX;
int virus_size;
int wall_size;
void dbfs(int val,int pos){
	int i,j;
	if(pos==m){
		int cnt=sum;
		int a[52][52]={0};
		int y,x,time;
		for(i=0;i<wall_size;i++){
			y=wall[i].first;
			x=wall[i].second;
			a[y][x]=-1;
		}
		for(i=0;i<virus_size;i++){
			y=virus[i].first;
			x=virus[i].second;
			a[y][x]=-2;
		}
		queue<pair<pair<int,int>,int> >q;
		for(i=0;i<m;i++){
			q.push(make_pair(make_pair(virus[selected[i]].first,virus[selected[i]].second),1));
			a[virus[selected[i]].first][virus[selected[i]].second]=1;
		}
		while(!q.empty()){
			y=q.front().first.first;
			x=q.front().first.second;
			time=q.front().second;
			q.pop();
			if(a[y+1][x]==-2 || a[y+1][x]==0){
				if(a[y+1][x]==0){
					cnt--;
				}
				a[y+1][x]=time+1;
				q.push(make_pair(make_pair(y+1,x),time+1));
			}
			if(a[y][x+1]==-2 || a[y][x+1]==0){
				if(a[y][x+1]==0){
					cnt--;
				}
				a[y][x+1]=time+1;
				q.push(make_pair(make_pair(y,x+1),time+1));
			}
			if(a[y-1][x]==-2 || a[y-1][x]==0){
				if(a[y-1][x]==0){
					cnt--;
				}
				a[y-1][x]=time+1;
				q.push(make_pair(make_pair(y-1,x),time+1));
			}
			if(a[y][x-1]==-2 || a[y][x-1]==0){
				if(a[y][x-1]==0){
					cnt--;
				}
				a[y][x-1]=time+1;
				q.push(make_pair(make_pair(y,x-1),time+1));
			}
			if(cnt==0){
				ans=min(ans,time);
				break;
			}
		}
//		printf("\n");
//		for(i=1;i<=n;i++){
//			for(j=1;j<=n;j++){
//				printf("%d ",a[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
		return;
	}
	for(i=val;i<virus_size;i++){
		selected[pos]=i;
		dbfs(i+1,pos+1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			int x;
			scanf("%d",&x);
			if(x==0){
				sum++;
			}
			else if(x==1){
				wall.push_back(make_pair(i,j));
			}
			else if(x==2){
				virus.push_back(make_pair(i,j));
			}
		}
	}
	for(i=0;i<=n+1;i++){
		wall.push_back(make_pair(0,i));
		wall.push_back(make_pair(i,0));
		wall.push_back(make_pair(n+1,i));
		wall.push_back(make_pair(i,n+1));
	}
	virus_size=virus.size();
	wall_size=wall.size();
	dbfs(0,0);
	if(sum==0)
		printf("0");
	else if(ans==INT_MAX)
		printf("-1");
	else
		printf("%d",ans);
}
