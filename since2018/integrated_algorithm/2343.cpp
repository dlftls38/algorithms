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
int a[100001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int l=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		l=max(l,a[i]);
		if(i>0){
			a[i]+=a[i-1];
		}
	}
	a[n]=INT_MAX;
	int r=pow(10,9);
	int mid;
	int ans=-1;
	while(l<=r){
		mid=(l+r)/2;
		int count=0;
		int last=0;
		for(i=0;i<n;i++){
			if(a[i]-last<=mid && a[i+1]-last>mid){
				count++;
				last=a[i];
			}
		}
		if(count<=m){
			r=mid-1;
			ans=mid;
		}
		else{
			l=mid+1;
		}
	}
	printf("%d",ans);
}
