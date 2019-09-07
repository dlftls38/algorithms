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
int h[5001];
vector<int>link[5001];
int dp[5001];
int solve(int pos){
	int len=link[pos].size();
	if(len==0){
		return 1;
	}
	int &res = dp[pos];
	if(res!=0){
		return res;
	}
	for(int i=0;i<len;i++){
		if(h[link[pos][i]]>h[pos])
			res = max(res, solve(link[pos][i]));
	}
	return res+=1;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&h[i]);
	}
	for(i=0;i<m;i++){
		int from,to;
		scanf("%d%d",&from,&to);
		link[from].push_back(to);
		link[to].push_back(from);
	}
	for(i=1;i<=n;i++){
		printf("%d\n",solve(i));
	}
}
