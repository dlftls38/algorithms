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
int ans[1000][1000];
int check[1000][1000];
string s[1000];
int answer=1;
int solve(int y,int x){
	int &res = ans[y][x];
	if(res!=0){
		return res;
	}
	if(check[y][x]==1){
		res=answer++;
		return res;
	}
	check[y][x]=1;
	if(s[y][x]=='S'){
		res = solve(y+1,x);
	}
	if(s[y][x]=='E'){
		res = solve(y,x+1);
	}
	if(s[y][x]=='W'){
		res = solve(y,x-1);
	}
	if(s[y][x]=='N'){
		res = solve(y-1,x);
	}
	return res ;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		cin>>s[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(ans[i][j]==0){
				solve(i,j);
			}
		}
	}
	printf("%d",answer-1);
}
