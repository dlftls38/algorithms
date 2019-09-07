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
	int n,m;
	scanf("%d%d",&n,&m);
	int a[300][300]={0};
	int check[300][300]={0};
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			check[i][j]=-1;
		}
	}
	int ans=0;
	queue<pair<pair<int,int>,int> >q;
	q.push({{0,0},a[0][0]});
	while(!q.empty()){
		int y=q.front().first.first;
		int x=q.front().first.second;
		int cnt=q.front().second;
		q.pop();
		if(y==n-1 && x==m-1){
			ans=max(ans,cnt);
			continue;
		}
		if(x+1<m && check[y][x+1]<cnt){
			check[y][x+1]=cnt;
			q.push({{y,x+1},cnt+a[y][x+1]});
		}
		if(y+1<n && check[y+1][x]<cnt){
			check[y+1][x]=cnt;
			q.push({{y+1,x},cnt+a[y+1][x]});
		}
	}
	printf("%d",ans);
}
