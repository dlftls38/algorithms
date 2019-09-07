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
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[1000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	long long ans=a[0];
	for(i=1;i<n;i++){
		a[i]+=a[i-1];
		ans+=a[i];
	}
	printf("%lld",ans);
}
