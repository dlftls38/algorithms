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
char a[500][501];
int check[500][500];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	queue<pair<pair<int,int>,int> >q;
	q.push({{0,0},0});
	check[0][0]=1;
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int cnt=q.front().second;
		int val=a[y][x]-'0';
		q.pop();
		if(y==n-1 && x==m-1){
			printf("%d",cnt);
			return 0;
		}
		if(y+val<n && check[y+val][x]==0){
			check[y+val][x]=1;
			q.push({{y+val,x},cnt+1});
		}
		if(x+val<m && check[y][x+val]==0){
			check[y][x+val]=1;
			q.push({{y,x+val},cnt+1});
		}
		if(y-val>=0 && check[y-val][x]==0){
			check[y-val][x]=1;
			q.push({{y-val,x},cnt+1});
		}
		if(x-val>=0 && check[y][x-val]==0){
			check[y][x-val]=1;
			q.push({{y,x-val},cnt+1});
		}
	}
	printf("IMPOSSIBLE");
}
