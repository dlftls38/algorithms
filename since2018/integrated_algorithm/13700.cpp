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
int police[100001];
int check[100001];
int main(){
	int n,s,d,f,b,k;
	scanf("%d%d%d%d%d%d",&n,&s,&d,&f,&b,&k);
	int i,j;
	for(i=0;i<k;i++){
		int l;
		scanf("%d",&l);
		police[l]=1;
	}
	queue<pair<int,int>>q;
	q.push({s,0});
	for(i=0;i<=n;i++){
		check[i]=INF;
	}
	check[s]=0;
	while(!q.empty()){
		int cur=q.front().first;
		int cnt=q.front().second;
		q.pop();
		if(cur==d){
			printf("%d",cnt);
			return 0;
		}
		if(cur+f<=n && police[cur+f]==0 && check[cur+f]>cnt+1){
			check[cur+f]=cnt+1;
			q.push({cur+f,cnt+1});
		}
		if(cur-b>=0 && police[cur-b]==0 && check[cur-b]>cnt+1){
			check[cur-b]=cnt+1;
			q.push({cur-b,cnt+1});
		}
	}
	printf("BUG FOUND");
}
