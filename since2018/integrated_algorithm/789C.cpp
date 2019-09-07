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
long long a[100000];
long long f(long long a,long long b){
	return abs(a-b);
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
//	for(i=0;i<n-1;i++){
//		long long ans=0;
//		for(j=i;j<n-1;j++){
//			if((j-i)%2==0)
//				ans+=f(a[j],a[j+1]);
//			else
//				ans-=f(a[j],a[j+1]);
//			printf("%lld %lld = %lld\n",i,j+1,ans);
//		}
//	}
	int s=0,e=0;
	long long ans=-LONG_LONG_MAX;
	long long v=0;
	while(!(s==n-2 && e==n-1)){
		if(v<0 || e==n-1 || (e-s)%2==1 && e==n-2){
			v-=f(a[s],a[s+1]);
			v=-v;
			s++;
			if(s>e){
				printf("!$#$#$##@$!");
			}
		}
		else{
			if((e-s)%2==0)
				v+=f(a[e],a[e+1]);
			else
				v-=f(a[e],a[e+1]);
			e++;
		}
		ans=max(ans,v);
		//printf("%lld %lld = %lld\n",s,e,v);
	}
	printf("%lld",ans);
}
