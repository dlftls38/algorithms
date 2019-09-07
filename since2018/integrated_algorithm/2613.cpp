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
	int n,m;
	scanf("%d%d",&n,&m);
	int a[301]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(i>0)a[i]+=a[i-1];
	}
	a[n]=INT_MAX;
	int l=1;
	int r=30000;
	int mid;
	int ans;
	int ans_seq[300];
	int ans_tail;
	while(l<=r){
		mid=(l+r)/2;
		int seq[300];
		int tail=0;
		int cur_pos=-1;
		int cur_val=0;
		int tail_sum=0;
		for(i=0;i<n;i++){
			if(a[i]-cur_val<=mid && a[i+1]-cur_val>mid){
				seq[tail++]=i-cur_pos;
				tail_sum+=i-cur_pos;
				cur_pos=i;
				cur_val=a[i];
			}
		}
		if(tail<=m && tail_sum==n){
			r=mid-1;
			ans=mid;
			int thirsty=m-tail;
			ans_tail=0;
			for(i=0;i<tail;i++){
				if(thirsty>0 && seq[i]>1){
					for(j=0;j<thirsty && seq[i]>j+1;j++){
						ans_seq[ans_tail++]=1;
					}
					thirsty-=j;
					seq[i]-=j;
					ans_seq[ans_tail++]=seq[i];
				}
				else{
					ans_seq[ans_tail++]=seq[i];
				}
			}
		}
		else{
			l=mid+1;
		}
	}
	printf("%d\n",ans);
	for(i=0;i<ans_tail;i++){
		printf("%d ",ans_seq[i]);
	}
}
