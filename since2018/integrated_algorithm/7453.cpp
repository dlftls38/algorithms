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
int q[16000000];
int w[16000000];
int tail1;
int tail2;
int main(){
	int n;
	int a[4000]={0};
	int b[4000]={0};
	int c[4000]={0};
	int d[4000]={0};
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			q[tail1++]=a[i]+b[j];
			w[tail2++]=c[i]+d[j];
		}
	}
	sort(q,q+tail1);
	sort(w,w+tail2);
	long long ans=0;
	for(i=0;i<tail1;i++){
		ans+=upper_bound(w,w+tail2,-q[i])-lower_bound(w,w+tail2,-q[i]);
	}
	printf("%lld",ans);
}
