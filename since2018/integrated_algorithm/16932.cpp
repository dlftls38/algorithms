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
pair<int,int> a[1002][1002];
int check[1002][1002];
int cnt=0;
void bfs(int y,int x){
	queue<pair<int,int> >q;
	q.push({y,x});
	check[y][x]=1;
	vector<pair<int,int> >v;
	v.push_back({y,x});
	while(!q.empty()){
		y=q.front().first;
		x=q.front().second;
		q.pop();
		if(a[y+1][x].first==1 && check[y+1][x]==0){
			check[y+1][x]=1;
			q.push({y+1,x});
			v.push_back({y+1,x});
		}
		if(a[y][x+1].first==1 && check[y][x+1]==0){
			check[y][x+1]=1;
			q.push({y,x+1});
			v.push_back({y,x+1});
		}
		if(a[y-1][x].first==1 && check[y-1][x]==0){
			check[y-1][x]=1;
			q.push({y-1,x});
			v.push_back({y-1,x});
		}
		if(a[y][x-1].first==1 && check[y][x-1]==0){
			check[y][x-1]=1;
			q.push({y,x-1});
			v.push_back({y,x-1});
		}
	}
	int len=v.size();
	int i,j;
	for(i=0;i<len;i++){
		y=v[i].first;
		x=v[i].second;
		a[y][x].first=len;
		a[y][x].second=cnt;
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			int temp;
			scanf("%d",&temp);
			a[i][j].first=temp;
			a[i][j].second=0;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j].first==1 && check[i][j]==0){
				bfs(i,j);
				cnt++;
			}
		}
	}
	int ans=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			//printf("%d %d   ",a[i][j].first,a[i][j].second);
			if(a[i][j].first==0){
				set<pair<int,int> >w;
				w.insert({a[i+1][j].first,a[i+1][j].second});
				w.insert({a[i][j+1].first,a[i][j+1].second});
				w.insert({a[i-1][j].first,a[i-1][j].second});
				w.insert({a[i][j-1].first,a[i][j-1].second});
				int temp=1;
				for(auto it : w){
					temp+=it.first;
				}
				ans=max(ans,temp);
			}
		}
		//printf("\n");
	}
	printf("%d",ans);
}
