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
	int n;
	scanf("%d",&n);
	int i,j,k;
	vector<pair<int,int>>v;
	for(i=0;i<n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		v.push_back({x,y});
	}
	long long ans=LONG_LONG_MAX;
	int ans_a;
	int ans_b;
	for(i=1;i<=100;i++){
		for(j=1;j<=100;j++){
			long long rss=0;
			for(k=0;k<n;k++){
				rss+=1LL*(v[k].second-i*v[k].first-j)*(v[k].second-i*v[k].first-j);
			}
			if(ans>rss){
				ans=rss;
				ans_a=i;
				ans_b=j;
			}
		}
	}
	printf("%d %d\n",ans_a,ans_b);
}
