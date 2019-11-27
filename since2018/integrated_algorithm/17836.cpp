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
struct state{
	int y,x,time,sword;
};
int main(){
	int n,m,t;
	cin>>n>>m>>t;
	int map[123][123];
	int check[123][123]={0};
	int check2[123][123]={0};
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	queue<state>q;
	q.push({0,0,0,0});
	int ans=INF;
	while(!q.empty()){
		int y=q.front().y;
		int x=q.front().x;
		int time=q.front().time;
		int sword=q.front().sword;
		q.pop();
		if(y==n-1 && x==m-1 && time<=t){
			ans=min(ans,time);
			continue;
		}
		//printf("%d %d %d\n",y,x,time);
		if(y+1<=n-1 && check[y+1][x]==0 && map[y+1][x]!=1){
			check[y+1][x]=1;
			if(map[y+1][x]==2){
				q.push({y+1,x,time+1,1});
				check2[y+1][x]=1;
			}
			else{
				q.push({y+1,x,time+1,sword});
			}
		}
		if(x+1<=m-1 && check[y][x+1]==0 && map[y][x+1]!=1){
			check[y][x+1]=1;
			if(map[y][x+1]==2){
				q.push({y,x+1,time+1,1});
				check2[y][x+1]=1;
			}
			else{
				q.push({y,x+1,time+1,sword});
			}
			if(sword==1){
				check2[y][x+1]=1;
			}
		}
		if(y-1>=0 && check[y-1][x]==0 && map[y-1][x]!=1){
			check[y-1][x]=1;
			if(map[y-1][x]==2){
				q.push({y-1,x,time+1,1});
				check2[y-1][x]=1;
			}
			else{
				q.push({y-1,x,time+1,sword});
			}
			if(sword==1){
				check2[y-1][x]=1;
			}
		}
		if(x-1>=0 && check[y][x-1]==0 && map[y][x-1]!=1){
			check[y][x-1]=1;
			if(map[y][x-1]==2){
				q.push({y,x-1,time+1,1});
				check2[y][x-1]=1;
			}
			else{
				q.push({y,x-1,time+1,sword});
			}
			if(sword==1){
				check2[y][x-1]=1;
			}
		}
		if(y+1<=n-1 && check2[y+1][x]==0 && sword==1){
			check2[y+1][x]=1;
			q.push({y+1,x,time+1,sword});
		}
		if(x+1<=m-1 && check2[y][x+1]==0 && sword==1){
			check2[y][x+1]=1;
			q.push({y,x+1,time+1,sword});
		}
		if(y-1>=0 && check2[y-1][x]==0 && sword==1){
			check2[y-1][x]=1;
			q.push({y-1,x,time+1,sword});
		}
		if(x-1>=0 && check2[y][x-1]==0 && sword==1){
			check2[y][x-1]=1;
			q.push({y,x-1,time+1,sword});
		}
	}
	if(ans<=t){
		printf("%d",ans);
	}
	else{
		printf("Fail");	
	}
}
