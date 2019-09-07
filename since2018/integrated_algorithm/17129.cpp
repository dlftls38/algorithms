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
char a[3000][3001];
int check[3000][3001];
int main(){
	int n,m;
	int i,j;
	scanf("%d%d",&n,&m);
	int y,x;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		for(j=0;j<m;j++){
			check[i][j]=INF;
			if(a[i][j]=='2'){
				y=i;
				x=j;
			}
		}
	}
	queue<pair<pair<int,int>,int> >q;
	q.push({{y,x},0});
	check[y][x]=1;
	while(!q.empty()){
		y=q.front().first.first;
		x=q.front().first.second;
		int dist=q.front().second;
		q.pop();
		if(a[y][x]>'2'){
			printf("TAK\n%d",dist);
			return 0;
		}
		if(y+1<n && a[y+1][x]!='1' && check[y+1][x]>dist+1){
			check[y+1][x]=dist+1;
			q.push({{y+1,x},dist+1});
		}
		if(x+1<m && a[y][x+1]!='1' && check[y][x+1]>dist+1){
			check[y][x+1]=dist+1;
			q.push({{y,x+1},dist+1});
		}
		if(y-1>=0 && a[y-1][x]!='1' && check[y-1][x]>dist+1){
			check[y-1][x]=dist+1;
			q.push({{y-1,x},dist+1});
		}
		if(x-1>=0 && a[y][x-1]!='1' && check[y][x-1]>dist+1){
			check[y][x-1]=dist+1;
			q.push({{y,x-1},dist+1});
		}
	}
	printf("NIE");
}
