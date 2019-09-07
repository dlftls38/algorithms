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
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	int a[252][252]={0};
	int check[252][252]={0};
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int ans=0;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]==1 && check[i][j]==0){
				ans++;
				queue<pair<int,int> >q;
				q.push({i,j});
				check[i][j]=1;
				while(!q.empty()){
					int y=q.front().first;
					int x=q.front().second;
					q.pop();
					if(a[y+1][x]==1 && check[y+1][x]==0){
						check[y+1][x]=1;
						q.push({y+1,x});
					}
					if(a[y][x+1]==1 && check[y][x+1]==0){
						check[y][x+1]=1;
						q.push({y,x+1});
					}
					if(a[y-1][x]==1 && check[y-1][x]==0){
						check[y-1][x]=1;
						q.push({y-1,x});
					}
					if(a[y][x-1]==1 && check[y][x-1]==0){
						check[y][x-1]=1;
						q.push({y,x-1});
					}
					if(a[y+1][x-1]==1 && check[y+1][x-1]==0){
						check[y+1][x-1]=1;
						q.push({y+1,x-1});
					}
					if(a[y-1][x+1]==1 && check[y-1][x+1]==0){
						check[y-1][x+1]=1;
						q.push({y-1,x+1});
					}
					if(a[y-1][x-1]==1 && check[y-1][x-1]==0){
						check[y-1][x-1]=1;
						q.push({y-1,x-1});
					}
					if(a[y+1][x+1]==1 && check[y+1][x+1]==0){
						check[y+1][x+1]=1;
						q.push({y+1,x+1});
					}
				}
			}
		}
	}
	printf("%d",ans);
}
