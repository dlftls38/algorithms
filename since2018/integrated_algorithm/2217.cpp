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
using namespace std;
long long max(long long a,long long b){
	if(a>b)return a;
	else return b;
}
int a[100000];
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	long long ans=0;
	for(i=0;i<n;i++){
		ans=max(ans,a[i]*(n-i));
	}
	printf("%lld",ans);
}
