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
int a[1000000];
int n;
int bs(int l,int target){
	int r=n-1;
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==target){
			return target;
		}
		else if(a[mid]>target){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
}
int main(){
	int x;
	while(scanf("%d",&x)==1){
		x*=10000000;
		scanf("%d",&n);
		int i,j;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int ans=-1;
		int l1,l2;
		for(i=0;i<n;i++){
			int k=bs(i+1,x-a[i]);
			if(k!=-1){
				if(ans<k-a[i]){
					ans=k-a[i];
					l1=a[i];
					l2=k;
				}
			}
		}
		if(ans==-1){
			printf("danger\n");
		}
		else{
			printf("yes %d %d\n",l1,l2);
		}	
	}
}
