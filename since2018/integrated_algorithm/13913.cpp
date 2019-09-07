#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int n,k;
int check[100001];
int recur(){
	queue<pair<int,int> >q;
	q.push({n,0});
	while(!q.empty()){
		int cur=q.front().first;
		int cnt=q.front().second;
		q.pop();
		if(cur==k){
			return cnt;
		}
		if(cur*2<=100000 && check[cur*2]==-1){
			check[cur*2]=cur;
			q.push({cur*2,cnt+1});
		}
		if(cur+1<=100000 && check[cur+1]==-1){
			check[cur+1]=cur;
			q.push({cur+1,cnt+1});
		}
		if(cur-1>=0 && check[cur-1]==-1){
			check[cur-1]=cur;
			q.push({cur-1,cnt+1});
		}
	}
}
int main(){
	scanf("%d%d",&n,&k);
	memset(check,-1,sizeof(check));
	int ans=recur();
	printf("%d\n",ans);
	int cur=k;
	stack<int>s;
	s.push(cur);
	while(cur!=n){
		s.push(check[cur]);
		cur=check[cur];
	}
	while(!s.empty()){
		printf("%d ",s.top());
		s.pop();
	}
}
