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
int n,m,ans;
vector<int>v;
int dp[333][333][333];
map<int,int>mp;
int solve(int cur, int time, int l, int r){
	//printf("%d %d %d %d\n",cur,time,l,r);
	int &ret = dp[mp[cur]][l][r];
	//printf("%d %d %d %d %d\n",cur,time,l,r,ret);
	if(ret!=-1){
		//printf("?\n");
		return ret;
	}
	ret=0;
	//printf("%d %d %d %d %d !\n",cur,time,l,r,ret);
	if(l>=1){
		//printf("1\n");
		int a = solve(v[l],time+abs(cur-v[l]),l-1,r);
		int b = max(0,m-(time+abs(cur-v[l])));
		//printf("%d + %d = %d // %d\n",a,b,a+b,ret);
		ret = max(a+b,ret);
		//ret=max(solve(v[l],time+abs(cur-v[l]),l-1,r)+max(0,m-(time+abs(cur-v[l]))),ret);
	}
	if(r<=n){
		//printf("2\n");
		int a = solve(v[r],time+abs(cur-v[r]),l,r+1);
		int b = max(0,m-(time+abs(cur-v[r])));
		//printf("%d + %d = %d // %d\n",a,b,a+b,ret);
		ret = max(a+b,ret);
		//ret=max(solve(v[r],time+abs(cur-v[r]),l,r+1)+max(0,m-(time+abs(cur-v[r]))),ret);
	}
	//printf("%d %d %d %d %d ?\n",cur,time,l,r,ret);
	return ret;
}
int main(){
	cin>>n>>m;
	int i,j;
	for(i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	v.push_back(-INF);
	sort(v.begin(),v.end());
	for(i=1;i<=n;i++){
		mp[v[i]]=i;
	}
	mp[0]=0;
	int l=0;
	int r=n+1;
	for(i=1;i<=n;i++){
		if(v[i]<=0){
			l=i;
		}
		else{
			break;
		}
	}
	for(i=n;i>=1;i--){
		if(v[i]>0){
			r=i;
		}
		else{
			break;
		}
	}
	for(i=0;i<333;i++){
		for(j=0;j<333;j++){
			for(int k=0;k<333;k++){
				dp[k][i][j]=-1;
			}
		}
	}
	printf("%d",solve(0,0,l,r));
}
