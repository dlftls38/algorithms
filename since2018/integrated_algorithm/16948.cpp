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
	int n;
	scanf("%d",&n);
	int r1,c1,r2,c2;
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	queue<pair<pair<int,int>,int> >q;
	q.push({{r1,c1},0});
	int i,j;
	int check[200][200];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			check[i][j]=INF;
		}
	}
	check[r1][c1]=0;
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int cnt=q.front().second;
		q.pop();
		if(y==r2 && x==c2){
			printf("%d",cnt);
			return 0;
		}
		if(y-2>=0 && x-1>=0 && check[y-2][x-1]>cnt+1){
			q.push({{y-2,x-1},cnt+1});
			check[y-2][x-1]=cnt+1;
		}
		if(y-2>=0 && x+1<n && check[y-2][x+1]>cnt+1){
			q.push({{y-2,x+1},cnt+1});
			check[y-2][x+1]=cnt+1;
		}
		if(x-2>=0 && check[y][x-2]>cnt+1){
			q.push({{y,x-2},cnt+1});
			check[y][x-2]=cnt+1;
		}
		if(x+2<n && check[y][x+2]>cnt+1){
			q.push({{y,x+2},cnt+1});
			check[y][x+2]=cnt+1;
		}
		if(y+2<n && x-1>=0 && check[y+2][x-1]>cnt+1){
			q.push({{y+2,x-1},cnt+1});
			check[y+2][x-1]=cnt+1;
		}
		if(y+2<n && x+1<n && check[y+2][x+1]>cnt+1){
			q.push({{y+2,x+1},cnt+1});
			check[y+2][x+1]=cnt+1;
		}
	}
	printf("-1");
}
