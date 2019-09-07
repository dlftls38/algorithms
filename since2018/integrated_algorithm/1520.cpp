#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int m,n;
int a[500][500];
int b[500][500];
int check[500][500];
priority_queue<pair<int,pair<int,int> > >pq;
void bfs(int y,int x){
	if(y+1 < m && a[y][x]>a[y+1][x]){
		if(check[y+1][x]==0){
			check[y+1][x]=1;
			pq.push(make_pair(a[y+1][x],make_pair(y+1,x)));
		}
		b[y+1][x]+=b[y][x];
	}
	if(x+1 < n && a[y][x]>a[y][x+1]){
		if(check[y][x+1]==0){
			check[y][x+1]=1;
			pq.push(make_pair(a[y][x+1],make_pair(y,x+1)));
		}
		b[y][x+1]+=b[y][x];
	}
	if(y-1 > -1 && a[y][x]>a[y-1][x]){
		if(check[y-1][x]==0){
			check[y-1][x]=1;
			pq.push(make_pair(a[y-1][x],make_pair(y-1,x)));
		}
		b[y-1][x]+=b[y][x];
	}
	if(x-1 > -1 && a[y][x]>a[y][x-1]){
		if(check[y][x-1]==0){
			check[y][x-1]=1;
			pq.push(make_pair(a[y][x-1],make_pair(y,x-1)));
		}
		b[y][x-1]+=b[y][x];
	}
	if(!pq.empty()){
		int l=pq.top().second.first;
		int r=pq.top().second.second;
		pq.pop();
		bfs(l,r);
	}
}
int main(){
	scanf("%d%d",&m,&n);
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	check[0][0]=1;
	b[0][0]=1;
	bfs(0,0);
	printf("%d",b[m-1][n-1]);
}
