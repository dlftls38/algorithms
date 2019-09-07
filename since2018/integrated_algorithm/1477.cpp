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
int main(){
	int n,m,ll;
	scanf("%d%d%d",&n,&m,&ll);
	int a[101]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	a[n]=ll;
	sort(a,a+n);
	int l=1;
	int r=1000;
	int mid;
	int ans;
	while(l<=r){
		mid=(l+r)/2;
		int cur_pos=0;
		int count=0;
		for(i=0;i<=n;i++){
			if(a[i]-cur_pos>mid){
				count++;
				cur_pos+=mid;
				i--;
			}
			else{
				cur_pos=a[i];
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
