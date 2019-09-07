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
int a[102][102];
int bfs(int y,int x){
	queue<pair<int,int> >q;
	q.push(make_pair(y,x));
	a[y][x]=1;
	int res=0;
	while(!q.empty()){
		y=q.front().first;
		x=q.front().second;
		q.pop();
		res++;
		if(a[y+1][x]==0){
			a[y+1][x]=1;
			q.push(make_pair(y+1,x));
		}
		if(a[y][x+1]==0){
			a[y][x+1]=1;
			q.push(make_pair(y,x+1));
		}
		if(a[y-1][x]==0){
			a[y-1][x]=1;
			q.push(make_pair(y-1,x));
		}
		if(a[y][x-1]==0){
			a[y][x-1]=1;
			q.push(make_pair(y,x-1));
		}
	}
	return res;
}
int main(){
	int m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	int i,j;
	for(i=0;i<=m+1;i++){
		a[i][0]=1;
		a[i][n+1]=1;
	}
	for(j=0;j<=n+1;j++){
		a[0][j]=1;
		a[m+1][j]=1;
	}
	for(i=0;i<k;i++){
		int y1,x1,y2,x2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		x1++;
		x2++;
		y1++;
		y2++;
		int l;
		for(j=y1;j<y2;j++){
			for(l=x1;l<x2;l++){
				a[j][l]=1;
			}
		}
	}
	int cnt=0;
	int ans[10000]={0};
	int tail=0;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]==0){
				ans[tail++]=bfs(i,j);
				cnt++;
			}
		}
	}
	sort(ans,ans+tail);
	printf("%d\n",cnt);
	for(i=0;i<tail;i++){
		printf("%d ",ans[i]);
	}
}
