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
char a[101][101];
int check[100][100];
int n;
void bfs(int y,int x,char c,int w){
	queue<pair<int,int> >q;
	q.push(make_pair(y,x));
	check[y][x]=1;
	while(!q.empty()){
		y=q.front().first;
		x=q.front().second;
		q.pop();
		if(w==0 && y-1>=0 && check[y-1][x]==0 && a[y-1][x]==c){
			check[y-1][x]=1;
			q.push(make_pair(y-1,x));
		}
		if(w==0 && y+1<n && check[y+1][x]==0 && a[y+1][x]==c){
			check[y+1][x]=1;
			q.push(make_pair(y+1,x));
		}
		if(w==0 && x+1<n && check[y][x+1]==0 && a[y][x+1]==c){
			check[y][x+1]=1;
			q.push(make_pair(y,x+1));
		}
		if(w==0 && x-1>=0 && check[y][x-1]==0 && a[y][x-1]==c){
			check[y][x-1]=1;
			q.push(make_pair(y,x-1));
		}
		if(w==1 && y-1>=0 && check[y-1][x]==0 && (c!='B' && a[y-1][x]!='B' || c=='B' && a[y-1][x]=='B') ){
			check[y-1][x]=1;
			q.push(make_pair(y-1,x));
		}
		if(w==1 && y+1<n && check[y+1][x]==0 && (c!='B' && a[y+1][x]!='B' || c=='B' && a[y+1][x]=='B') ){
			check[y+1][x]=1;
			q.push(make_pair(y+1,x));
		}
		if(w==1 && x+1<n && check[y][x+1]==0 && (c!='B' && a[y][x+1]!='B' || c=='B' && a[y][x+1]=='B') ){
			check[y][x+1]=1;
			q.push(make_pair(y,x+1));
		}
		if(w==1 && x-1>=0 && check[y][x-1]==0 && (c!='B' && a[y][x-1]!='B' || c=='B' && a[y][x-1]=='B') ){
			check[y][x-1]=1;
			q.push(make_pair(y,x-1));
		}
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(check[i][j]==0){
				bfs(i,j,a[i][j],0);
				ans++;
			}
		}
	}
	for(i=0;i<n;i++){
		memset(check[i],0,sizeof(check[i]));
	}
	printf("%d ",ans);
	ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(check[i][j]==0){
				bfs(i,j,a[i][j],1);
				ans++;
			}
		}
	}
	printf("%d",ans);
}
