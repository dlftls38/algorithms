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
int n,m;
char a[52][52];
int all;
int ans=INT_MAX;
vector<pair<int,int> >lefts;
void solve(int sum,int cnt,int pos){
	if(sum%2==1 && sum/2+1+cnt>ans || sum%2==0 && sum/2+cnt>ans){
		return;
	}
	if(sum==all){
		ans=min(ans,cnt);
		return;
	}
	int i;
	for(i=pos;i<all;i++){
		int y=lefts[i].first;
		int x=lefts[i].second;
		if(a[y][x]=='.'){
			a[y][x]='X';
			if(a[y][x+1]=='.'){
				a[y][x+1]='X';
				solve(sum+2,cnt+1,i+2);
				a[y][x+1]='.';
			}
			if(a[y+1][x]=='.'){
				a[y+1][x]='X';
				solve(sum+2,cnt+1,i+1);
				a[y+1][x]='.';
			}
			solve(sum+1,cnt+1,i+1);
			a[y][x]='.';
			return;
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		for(j=0;j<m;j++){
			if(a[i][j]=='.'){
				all++;
				lefts.push_back({i,j});
			}
		}
	}
	solve(0,0,0);
	printf("%d",ans);
}
