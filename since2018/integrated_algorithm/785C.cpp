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
int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	int i,j;
	long long l=1;
	long long r=pow(10,18);
	long long ans;
	while(l<=r){
		long long mid=(l+r)/2;
		long long k=mid-1-m;
		if(mid>=n || k>=3037000499){
			r=mid-1;
			ans=mid;
		}
		else if(n-mid<=k*(k+1)/2 && k>0){
			r=mid-1;
			ans=mid;
		}
		else{
			l=mid+1;
		}
	}
	printf("%lld",ans);
}
