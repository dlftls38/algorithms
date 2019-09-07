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
int dp[10000];
int main(){
	int i,j;
	for(int i=1;i<10000;i++){
		int gn=i;
		int temp=0;
		while(gn>0){
			temp+=gn%10;
			gn/=10;
		}
		gn=temp;
		while(gn>=10){
			gn=dp[gn];
		}
		dp[i]=gn;
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int k,m;
		scanf("%d%d",&k,&m);
		int q[100]={0};
		int gn=1;
		for(i=0;i<100;i++){
			q[i]=gn;
			gn*=m;
			gn=dp[gn];
		}
		int tail=0;
		int head=0;
		for(i=4;i<100;i+=4){
			for(j=0;j<i;j+=4){
				if(q[j]==q[i]){
					tail=i;
					head=j;
					break;
				}
			}
		}
		int ans[4]={0};
		for(i=0;i<head && i<k;i++){
			if(i%4==0){
				ans[i%4]+=q[i];
			}
			else if(i%4==1){
				ans[i%4]+=q[i];
			}
			else if(i%4==2){
				ans[i%4]-=q[i];
			}
			else{
				ans[i%4]-=q[i];
			}
		}
		int sum[4]={0};
		for(i=head;i<tail;i++){
			if(i%4==0){
				sum[i%4]+=q[i];
			}
			else if(i%4==1){
				sum[i%4]+=q[i];
			}
			else if(i%4==2){
				sum[i%4]-=q[i];
			}
			else{
				sum[i%4]-=q[i];
			}
		}
		k-=head;
		for(i=0;i<4;i++){
			ans[i]+=k/(tail-head)*sum[i];
		}
		k%=(tail-head);
		for(i=head;i<head+k;i++){
			if(i%4==0){
				ans[i%4]+=q[i];
			}
			else if(i%4==1){
				ans[i%4]+=q[i];
			}
			else if(i%4==2){
				ans[i%4]-=q[i];
			}
			else{
				ans[i%4]-=q[i];
			}
		}
		int row=ans[1]+ans[3];
		int column=ans[0]+ans[2];
		printf("%d %d\n",row,column);
	}
}
