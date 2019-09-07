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
int a[100000];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int mx=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		mx=max(mx,a[i]);
	}
	int l=mx;
	int r=pow(10,9);
	int mid;
	int ans;
	while(l<=r){
		mid=(l+r)/2;
		int left=mid;
		int count=1;
		for(i=0;i<n;i++){
			if(left>=a[i]){
				left-=a[i];
			}
			else{
				left=mid;
				left-=a[i];
				count++;
			}
		}
		if(count<=m){
			ans=mid;
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	printf("%d",ans);
}
