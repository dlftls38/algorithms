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
int a[200000];
int main(){
	int n,c;
	scanf("%d%d",&n,&c);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int l=1;
	int r=a[n-1];
	int mid=(l+r)/2;
	int ans=0;
	while(l<=r){
		int count=1;
		int cur_val=1;
		int next_val=*lower_bound(a,a+n,cur_val+mid);
		while(next_val>0){
			count++;
			cur_val=next_val;
			next_val=*lower_bound(a,a+n,cur_val+mid);
		}
		if(count>=c){
			ans=mid;
			l=mid+1;
			mid=(l+r)/2;
		}
		else{
			r=mid-1;
			mid=(l+r)/2;
		}
	}
	printf("%d",ans);
}
