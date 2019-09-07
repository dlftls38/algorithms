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
int a[200000];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int ans=INT_MAX;
		int dist=INT_MAX;
		for(int i=0;i+k<n;i++)
			if(dist>a[i+k]-(a[i]+a[i+k])/2){
				dist=a[i+k]-(a[i]+a[i+k])/2;
				ans=(a[i]+a[i+k])/2;
			}
		printf("%d\n",ans);
	}
}
