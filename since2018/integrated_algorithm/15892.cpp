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
int route[301][301];
int ans;
void solve(int cur,int cnt){
	if(cur==n){
		ans+=cnt;
		return;
	}
	for(int i=1;i<=n;i++){
		if(route[cur][i]>0){
			solve(i,min(cnt,route[cur][i]));
		}
	}
}
int main(){
	int m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		route[a][b]=c;
	}
	solve(1,INT_MAX);
	printf("%d",ans);
}
