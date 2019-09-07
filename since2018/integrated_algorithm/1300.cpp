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
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long l=1;
	long long r=n*n;
	long long mid;
	long long ans;
	while(l<=r){
		mid=(l+r)/2;
		long long count=0;
		for(int i=1;i<=n;i++){
			count+=min(n,mid/i);
		}
		if(count<k){
			l=mid+1;
		}
		else{
			ans=mid;
			r=mid-1;
		}
	}
	printf("%lld",ans);
}
