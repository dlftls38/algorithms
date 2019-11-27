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
	int a[100]={0};
	a['A']=1;
	a['2']=2;
	a['3']=3;
	a['4']=4;
	a['5']=5;
	a['6']=6;
	a['7']=7;
	a['8']=8;
	a['9']=9;
	a['T']=10;
	a['J']=11;
	a['Q']=12;
	a['K']=13;
	int n;
	scanf("%d",&n);
	int i,j;
	string board[10][10];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>board[i][j];
		}
	}
	int ans[10][10]={0};
	ans[n-1][0]=a[board[n-1][0][0]];
	queue<pair<pair<int,int>,int>>q;
	q.push({{n-1,0},ans[n-1][0]});
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int val=q.front().second;
		q.pop();
		if(y-1>=0 && ans[y-1][x]<val+a[board[y-1][x][0]]){
			ans[y-1][x]=val+a[board[y-1][x][0]];
			q.push({{y-1,x},ans[y-1][x]});
		}
		if(x+1<n && ans[y][x+1]<val+a[board[y][x+1][0]]){
			ans[y][x+1]=val+a[board[y][x+1][0]];
			q.push({{y,x+1},ans[y][x+1]});
		}
	}
	printf("%d",ans[0][n-1]);
}
