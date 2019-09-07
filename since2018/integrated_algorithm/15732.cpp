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
int a[10000];
int b[10000];
int c[10000];
int main(){
	int n,k,d;
	scanf("%d%d%d",&n,&k,&d);
	int i,j;
	for(i=0;i<k;i++){
		int ta,tb,tc;
		scanf("%d%d%d",&ta,&tb,&tc);
		a[i]=ta;
		b[i]=tb;
		c[i]=tc;
	}
	int l=1;
	int r=1000000;
	int ans;
	while(l<=r){
		int mid=(l+r)/2;
		long long cnt=0;
		for(i=0;i<k;i++){
			if(a[i]<=mid){
				cnt+=(min(mid,b[i])-a[i])/c[i]+1;
			}
		}
		//printf("%d %d %d %d\n",l,r,mid,cnt);
		if(cnt>=d){
			ans=mid;
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	printf("%d",ans);
}
