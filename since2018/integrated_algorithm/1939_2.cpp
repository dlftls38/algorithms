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
#include <math.h>
using namespace std;
int cost[100001];
int check[10001];
int tail,n,m;
vector<pair<int, int> >v[10001];
queue<int>q;
int ans;
int start,dest;
int suc;
void bfs(int weight,int cur,int dest){
	if(cur==dest || suc==1){
		ans=weight;
		suc=1;
		return;
	}
	int size=v[cur].size();
	for(int i=0;i<size;i++){
		if(v[cur][i].second>=weight && check[v[cur][i].first]==0){
			q.push(v[cur][i].first);
			check[v[cur][i].first]=1;
		}
	}
	if(!q.empty()){
		int next=q.front();
		q.pop();
		bfs(weight,next,dest);
	}
}
void bs(){
	int l=0;
	int r=m-1;
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		memset(check,0,sizeof(check));
		check[start]=1;
		suc=0;
		while(!q.empty())q.pop();
		bfs(cost[mid],start,dest);
		if(suc==1){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
		cost[tail++]=c;
	}
	sort(cost,cost+m);
	scanf("%d%d",&start,&dest);
	bs();
	printf("%d",ans);
}
