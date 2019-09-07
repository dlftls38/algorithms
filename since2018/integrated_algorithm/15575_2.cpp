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
using namespace std;
typedef pair<int,int> pii;
vector<pair<int,int> >origin;
vector<pair<pair<int,int>,int > >sorted[1000000];
vector<pair<pair<int,int>,int > >sorted2[1000000];
double dp[1000000];
int tail;
double dist(pair<int,int> a,pair<int,int> b){
	return sqrt(1LL*(a.first-b.first)*(a.first-b.first)+1LL*(a.second-b.second)*(a.second-b.second));
}
double solve(int line,int pos){
	if(line==tail){
		return 0;
	}
	double &ret=dp[pos];
	if(ret!=-1){
		return ret;
	}
	for(int i=0;i<2;i++){
		ret=max(ret,solve(line+1,sorted2[line+1][i].second)+dist(origin[pos],sorted2[line+1][i].first));
	}
	return ret;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		origin.push_back({x,y});
	}
	sort(origin.begin(),origin.end());
	int cur=origin[0].first;
	for(i=0;i<n;i++){
		if(cur<origin[i].first){
			cur=origin[i].first;
			tail++;
		}
		sorted[tail].push_back({origin[i],i});
	}
	for(i=0;i<=tail;i++){
		int len=sorted[i].size();
		sorted2[i].push_back(sorted[i][0]);
		sorted2[i].push_back(sorted[i][len-1]);
	}
	for(i=0;i<n;i++){
		dp[i]=-1;
	}
	double ans=0;
	for(i=0;i<2;i++){
		ans=max(ans,solve(0,sorted2[0][i].second));
	}
	printf("%.7f",ans);
}
