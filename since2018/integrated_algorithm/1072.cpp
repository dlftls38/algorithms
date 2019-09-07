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
long long ans=INT_MAX;
long long x,y,z;
void bs(long long l,long long r){
	while(l<=r){
		long long mid=(l+r)/2;
		if((mid+y)*100/(mid+x)!=z){
			ans=min(ans,mid);
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
}
int main(){
	scanf("%lld%lld",&x,&y);
	z=y*100/x;
	bs(0,x);
	if(ans==INT_MAX){
		printf("-1");
	}
	else{
		printf("%lld",ans);
	}
}
