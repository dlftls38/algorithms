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
	int n,k;
	scanf("%d%d",&n,&k);
	queue<int>q[101];
	int i,j;
	int a[101]={0};
	for(i=0;i<k;i++){
		int x;
		scanf("%d",&x);
		a[i]=x;
		q[x].push(i);
	}
	int plug[101]={0};
	int tail=0;
	int ans=0;
	for(i=0;i<k;i++){
		q[a[i]].pop();
		int in=0;
		for(j=0;j<tail;j++){
			if(plug[j]==a[i])
				in=1;
		}
		if(in==1){
			continue;
		}
		if(tail<n){
			plug[tail++]=a[i];
		}
		else{
			ans++;
			int prior=0;
			int designated;
			for(j=0;j<tail;j++){
				if(q[plug[j]].empty()){
					prior=123456789;
					designated=j;
					break;
				}
				else{
					if(prior<q[plug[j]].front()){
						prior=q[plug[j]].front();
						designated=j;
					}
				}
			}
			plug[designated]=a[i];
		}
	}
	printf("%d",ans);
}
