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
using namespace std;
vector<long long>v;
int size;
int ans;
void dfs(long long cur,int count){
	if(cur==0){
		ans=min(ans,count);
		return;
	}
	if(cur<0 || count>ans){
		return;
	}
	for(int i=0;i<size;i++){
		if(cur-v[i]>=0){
			dfs(cur-v[i],count+1);
			c++;
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int i,j;
	for(i=0;i<=15;i++){
		v.push_back(pow(10,i));
	}
	for(i=0;i<=7;i++){
		v.push_back(25*pow(100,i));
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	size=v.size();
	while(t--){
		long long n;
		scanf("%lld",&n);
		ans=123;
		dfs(n,0);
		printf("%lld\n",ans);
	}
}
