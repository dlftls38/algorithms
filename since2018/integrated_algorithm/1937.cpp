#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[502][502]={0};
	int b[502][502]={0};
	fill(&b[0][0], &b[501][501], 1);
	priority_queue<pair<int,pair<int,int> > , vector<  pair<int,pair<int,int> > >, greater<  pair<int,pair<int,int> > > >pq;
	for(i=1;i<n+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&a[i][j]);
			pq.push(make_pair(a[i][j],make_pair(i,j)));
		}
	}
	int ans=1;
	for(i=0;i<n*n;i++){
		int y=pq.top().second.first;
		int x=pq.top().second.second;
		if(a[y][x]<a[y+1][x] && b[y][x]>=b[y+1][x]){
			b[y+1][x]=b[y][x]+1;
			ans=max(ans,b[y+1][x]);
		}
		if(a[y][x]<a[y][x+1] && b[y][x]>=b[y][x+1]){
			b[y][x+1]=b[y][x]+1;
			ans=max(ans,b[y][x+1]);
		}
		if(a[y][x]<a[y-1][x] && b[y][x]>=b[y-1][x]){
			b[y-1][x]=b[y][x]+1;
			ans=max(ans,b[y-1][x]);
		}
		if(a[y][x]<a[y][x-1] && b[y][x]>=b[y][x-1]){
			b[y][x-1]=b[y][x]+1;
			ans=max(ans,b[y][x-1]);
		}
		pq.pop();
	}
	printf("%d",ans);
}
