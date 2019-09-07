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
using namespace std;
typedef pair<int,int> pii;
int a[201][201][31];
int check[201][201][31];
int k,w,h;
int bfs(){
	int ans=INT_MAX;
	queue<pair<pair<int,int>,pair<int,int> > >q;
	q.push({{1,1},{0,0}});
	int i,j,l;
	for(i=1;i<=h;i++){
		for(j=1;j<=w;j++){
			for(l=0;l<31;l++){
				check[i][j][l]=ans;
			}
		}
	}
	check[1][1][0]=0;
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int jump=q.front().second.first;
		int cnt=q.front().second.second;
		q.pop();
		//printf("\n%d %d %d %d\n",y,x,jump,cnt);
		if(y==h && x==w){
			ans=min(ans,cnt);
		}
		if(y+1<=h && x+2<=w && jump<k && a[y+1][x+2][0]==0 && check[y+1][x+2][jump+1]>cnt+1){
			q.push({{y+1,x+2},{jump+1,cnt+1}});
			check[y+1][x+2][jump+1]=cnt+1;
		}
		if(y+2<=h && x+1<=w && jump<k && a[y+2][x+1][0]==0 && check[y+2][x+1][jump+1]>cnt+1){
			q.push({{y+2,x+1},{jump+1,cnt+1}});
			check[y+2][x+1][jump+1]=cnt+1;
		}
		if(y+1<=h && x-2>=1 && jump<k && a[y+1][x-2][0]==0 && check[y+1][x-2][jump+1]>cnt+1){
			q.push({{y+1,x-2},{jump+1,cnt+1}});
			check[y+1][x-2][jump+1]=cnt+1;
		}
		if(y+2<=h && x-1>=1 && jump<k && a[y+2][x-1][0]==0 && check[y+2][x-1][jump+1]>cnt+1){
			q.push({{y+2,x-1},{jump+1,cnt+1}});
			check[y+2][x-1][jump+1]=cnt+1;
		}
		if(y-1>=1 && x-2>=1 && jump<k && a[y-1][x-2][0]==0 && check[y-1][x-2][jump+1]>cnt+1){
			q.push({{y-1,x-2},{jump+1,cnt+1}});
			check[y-1][x-2][jump+1]=cnt+1;
		}
		if(y-2>=1 && x-1>=1 && jump<k && a[y-2][x-1][0]==0 && check[y-2][x-1][jump+1]>cnt+1){
			q.push({{y-2,x-1},{jump+1,cnt+1}});
			check[y-2][x-1][jump+1]=cnt+1;
		}
		if(y-1>=1 && x+2<=w && jump<k && a[y-1][x+2][0]==0 && check[y-1][x+2][jump+1]>cnt+1){
			q.push({{y-1,x+2},{jump+1,cnt+1}});
			check[y-1][x+2][jump+1]=cnt+1;
		}
		if(y-2>=1 && x+1<=w && jump<k && a[y-2][x+1][0]==0 && check[y-2][x+1][jump+1]>cnt+1){
			q.push({{y-2,x+1},{jump+1,cnt+1}});
			check[y-2][x+1][jump+1]=cnt+1;
		}
		if(y+1<=h && a[y+1][x][0]==0 && check[y+1][x][jump]>cnt+1){
			q.push({{y+1,x},{jump,cnt+1}});
			check[y+1][x][jump]=cnt+1;
		}
		if(y-1>=1 && a[y-1][x][0]==0 && check[y-1][x][jump]>cnt+1){
			q.push({{y-1,x},{jump,cnt+1}});
			check[y-1][x][jump]=cnt+1;
		}
		if(x+1<=w && a[y][x+1][0]==0 && check[y][x+1][jump]>cnt+1){
			q.push({{y,x+1},{jump,cnt+1}});
			check[y][x+1][jump]=cnt+1;
		}
		if(x-1>=1 && a[y][x-1][0]==0 && check[y][x-1][jump]>cnt+1){
			q.push({{y,x-1},{jump,cnt+1}});
			check[y][x-1][jump]=cnt+1;
		}
	}
	return ans==INT_MAX?-1:ans;
}
int main(){
	scanf("%d%d%d",&k,&w,&h);
	int i,j;
	for(i=1;i<=h;i++){
		for(j=1;j<=w;j++){
			scanf("%d",&a[i][j][0]);
		}
	}
	printf("%d",bfs());
}
