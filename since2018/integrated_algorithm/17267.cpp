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
int a[1002][1002];
int l[1002][1002];
int r[1002][1002];
int lefts,rights;
int ans[1002][1002];
int y,x;
void bfs(){
	queue<pair<pair<int,int>,pair<int,int> > >q;
	q.push(make_pair(make_pair(y,x),make_pair(lefts,rights)));
	while(!q.empty()){
		y=q.front().first.first;
		x=q.front().first.second;
		lefts=q.front().second.first;
		rights=q.front().second.second;
		//printf("%d %d %d %d\n",y,x,lefts,rights);
		q.pop();
		ans[y][x]=1;
		if(rights>0 && ( a[y][x+1]==0 || a[y][x+1]==2 && l[y][x+1]<=lefts && r[y][x+1]<=rights-1 )){
			a[y][x+1]=2;
			l[y][x+1]=lefts;
			r[y][x+1]=rights-1;
			q.push(make_pair(make_pair(y,x+1),make_pair(lefts,rights-1)));
		}
		if(lefts>0 && ( a[y][x-1]==0 || a[y][x-1]==2 && l[y][x-1]<=lefts-1 && r[y][x-1]<=rights )){
			a[y][x-1]=2;
			l[y][x-1]=lefts-1;
			r[y][x-1]=rights;
			q.push(make_pair(make_pair(y,x-1),make_pair(lefts-1,rights)));
		}
		if(a[y+1][x]==0 || a[y+1][x]==2 && (l[y+1][x]<=lefts && r[y+1][x]<rights || l[y+1][x]<lefts && r[y+1][x]<=rights)){
			a[y+1][x]=2;
			l[y+1][x]=lefts;
			r[y+1][x]=rights;
			q.push(make_pair(make_pair(y+1,x),make_pair(lefts,rights)));
		}
		if(a[y-1][x]==0 || a[y-1][x]==2 && (l[y-1][x]<=lefts && r[y-1][x]<rights || l[y-1][x]<lefts && r[y-1][x]<=rights)){
			a[y-1][x]=2;
			l[y-1][x]=lefts;
			r[y-1][x]=rights;
			q.push(make_pair(make_pair(y-1,x),make_pair(lefts,rights)));
		}
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	scanf("%d%d",&lefts,&rights);
	int i,j;
	for(i=1;i<=n;i++){
		char temp[1001];
		scanf("%s",temp);
		for(j=1;j<=m;j++){
			a[i][j]=temp[j-1]-48;
			if(temp[j-1]=='2'){
				y=i;
				x=j;
				l[y][x]=lefts;
				r[y][x]=rights;
			}
		}
	}
	for(i=0;i<=n+1;i++){
		a[i][0]=1;
		a[i][m+1]=1;
	}
	for(i=0;i<=m+1;i++){
		a[0][i]=1;
		a[n+1][i]=1;
	}
	bfs();
	int res=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			res+=ans[i][j];
		}
	}
	printf("%d",res);
}
