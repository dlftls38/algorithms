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
long long min(long long a,long long b){
	if(a>b){
		return b;
	}
	else{
		return a;
	}
}
int main(){
	long long x,y,z;
	scanf("%lld%lld%lld",&x,&y,&z);
	long long ans=(x+y)/z;
	if(x/z+y/z!=ans){
		if(x%z<y%z){
			printf("%lld %lld",ans,z-y%z);
		}
		else{
			printf("%lld %lld",ans,z-x%z);
		}
	}
	else{
		printf("%lld 0",ans);
	}
}
