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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
struct component{
	int y,x,dist;
};
int main(){
	int n,m;
	char bitmap[200][200]={0};
	int ans[200][200];
	int i,j;
	cin>>n>>m;
	queue<component>q;
	for(i=0;i<n;i++){
		scanf("%s",bitmap[i]);
		for(j=0;j<m;j++){
			ans[i][j]=INF;
			if(bitmap[i][j]=='1'){
				q.push({i,j,0});
				ans[i][j]=0;
			}
		}
	}
	while(!q.empty()){
		int y=q.front().y;
		int x=q.front().x;
		int dist=q.front().dist;
		q.pop();
		if(y+1<n && ans[y+1][x]>dist+1){
			q.push({y+1,x,dist+1});
			ans[y+1][x]=dist+1;
		}
		if(y-1>=0 && ans[y-1][x]>dist+1){
			q.push({y-1,x,dist+1});
			ans[y-1][x]=dist+1;
		}
		if(x+1<m && ans[y][x+1]>dist+1){
			q.push({y,x+1,dist+1});
			ans[y][x+1]=dist+1;
		}
		if(x-1>=0 && ans[y][x-1]>dist+1){
			q.push({y,x-1,dist+1});
			ans[y][x-1]=dist+1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
}
