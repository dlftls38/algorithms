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
int a,b;
int bfs(){
	int ans=INF;
	queue<pair<int,int> >q;
	q.push({a,1});
	map<long long,int>mp;
	while(!q.empty()){
		long long cur=q.front().first;
		int cnt=q.front().second;
		q.pop();
		if(cur==b){
			ans=cnt;
			break;
		}
		if(cur*2<=b && mp[cur*2]==0){
			q.push({cur*2,cnt+1});
			mp[cur*2]=cnt+1;
		}
		if(cur*10+1<=b && mp[cur*10+1]==0){
			q.push({cur*10+1,cnt+1});
			mp[cur*10+1]=cnt+1;
		}
	}
	if(ans==INF){
		return -1;
	}
	else{
		return ans;
	}
}
int main(){
	scanf("%d%d",&a,&b);
	printf("%d",bfs());
}
