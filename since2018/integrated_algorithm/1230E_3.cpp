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
#define MOD 1000000007
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
const int maxn = 100005;
vector<int>link[maxn];
long long x[maxn];
long long ans=0;
map<long long,int>beauty[maxn];
void dfs(int cur, int parent, int depth){
	beauty[depth].clear();
	beauty[depth][x[cur]]++;
	ans = (ans + x[cur])%MOD;
	for(auto it : beauty[depth-1]){
		long long new_val = __gcd(it.first, x[cur]);
		ans = (ans + new_val*it.second%MOD)%MOD;
		beauty[depth][new_val]+=it.second;
	}
	for(auto it : link[cur]){
		if(it==parent)continue;
		dfs(it,cur,depth+1);
	}
}
int main(){
	int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++){
		cin>>x[i];
	}
	for(i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		link[a].push_back(b);
		link[b].push_back(a);
	}
	dfs(1,0,1);
	printf("%lld",ans);
}
