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
int n;
int a[102][102]={0};
int bfs(int start,int cost){
	queue<pair<int,int> >q;
	int check[102][102]={0};
	q.push(make_pair(1,1));
	int destination=0;
	int mx=0;
	int mn=INT_MAX;
	while(!q.empty()){
		int y=q.front().first;
		int x=q.front().second;
		q.pop();
		if(start>a[y][x] || a[y][x]>start+cost){
			break;
		}
		mx=max(mx,a[y][x]);
		mn=min(mn,a[y][x]);
		if(y==n && x==n){
			destination=1;
		}
		if(start<=a[y+1][x] && a[y+1][x]<=start+cost && check[y+1][x]==0){
			q.push(make_pair(y+1,x));
			check[y+1][x]=1;
		}
		if(start<=a[y][x+1] && a[y][x+1]<=start+cost && check[y][x+1]==0){
			q.push(make_pair(y,x+1));
			check[y][x+1]=1;
		}
		if(start<=a[y-1][x] && a[y-1][x]<=start+cost && check[y-1][x]==0){
			q.push(make_pair(y-1,x));
			check[y-1][x]=1;
		}
		if(start<=a[y][x-1] && a[y][x-1]<=start+cost && check[y][x-1]==0){
			q.push(make_pair(y,x-1));
			check[y][x-1]=1;
		}
	}
	if(destination){
		return mx-mn;
	}
	else{
		return INT_MAX;
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<=n+1;i++){
		for(j=0;j<=n+1;j++){
			a[i][j]=1000;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int l=0;
	int r=200;
	int mid;
	int ans=INT_MAX;
	while(l<=r){
		mid=(l+r)/2;
		int xx=INT_MAX;
		for(i=0;i<=200;i++){
			int temp=bfs(i,mid);
			xx=min(xx,temp);
		}
		if(xx==INT_MAX){
			l=mid+1;
		}
		else{
			r=mid-1;
			ans=xx;
		}
	}
	printf("%d",ans);
}
