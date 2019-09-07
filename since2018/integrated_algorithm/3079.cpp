#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int line[100000];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&line[i]);
	}
	long long l=1;
	long long r=pow(10,18);
	long long mid;
	long long ans;
	while(l<=r){
		mid=(l+r)/2;
		long long count=0;
		for(i=0;i<n;i++){
			count+=mid/line[i];
		}
		if(count>=m){
			r=mid-1;
			ans=mid;
		}
		else{
			l=mid+1;
		}
	}
	printf("%lld",ans);
}
