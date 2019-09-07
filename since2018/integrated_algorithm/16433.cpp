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
int n;
int r,c;
char a[99][100];
void solve(){
	queue<pair<int,int> >q;
	q.push({r,c});
	while(!q.empty()){
		int y=q.front().first;
		int x=q.front().second;
		q.pop();
		if(y-1>=0 && x-1>=0 && a[y-1][x-1]=='.'){
			a[y-1][x-1]='v';
			q.push({y-1,x-1});
		}
		if(y+1<n && x-1>=0 && a[y+1][x-1]=='.'){
			a[y+1][x-1]='v';
			q.push({y+1,x-1});
		}
		if(y-1>=0 && x+1<n && a[y-1][x+1]=='.'){
			a[y-1][x+1]='v';
			q.push({y-1,x+1});
		}
		if(y+1<n && x+1<n && a[y+1][x+1]=='.'){
			a[y+1][x+1]='v';
			q.push({y+1,x+1});
		}
	}
}
int main(){
	scanf("%d%d%d",&n,&r,&c);
	int i,j;
	r--;
	c--;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]='.';
		}
	}
	a[r][c]='v';
	solve();
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
