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
double dist[100000];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<n;i++){
		int p;
		scanf("%d",&p);
		double long_dist=0;
		for(j=0;j<p;j++){
			int y,x;
			scanf("%d%d",&y,&x);
			long_dist=max(long_dist,sqrt(1LL*y*y+1LL*x*x));
		}
		dist[i]=long_dist;
	}
	sort(dist,dist+n);
	int l=0;
	int r=n-1;
	int ans;
	while(l<=r){
		int mid=(l+r)/2;
		int cnt=0;
		for(i=0;i<n;i++){
			if(dist[mid]>=dist[i])cnt++;
		}
		if(cnt>=k){
			r=mid-1;
			ans=mid;
		}
		else{
			l=mid+1;
		}
	}
	printf("%.2f",dist[ans]*dist[ans]);
}
