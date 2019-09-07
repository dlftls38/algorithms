#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int ans=INT_MAX,n;
int a[20][20]={0};
int start[10]={0};
int link[10]={0};
int check[20]={0};
void bt(int pos,int cnt){
	int i,j;
	if(cnt==n/2){
		int cnt2=0;
		for(i=0;i<n;i++){
			if(check[i]==0){
				link[cnt2++]=i;
			}
		}
		int sum1=0,sum2=0;
		for(i=0;i<cnt;i++){
			for(j=i+1;j<cnt;j++){
				sum1+=a[start[i]][start[j]];
				sum1+=a[start[j]][start[i]];
				sum2+=a[link[i]][link[j]];
				sum2+=a[link[j]][link[i]];
			}
		}
		ans=min(ans,abs(sum1-sum2));
		return;
	}
	for(i=pos;i<n;i++){
		start[cnt]=i;
		check[i]=1;
		bt(i+1,cnt+1);
		check[i]=0;
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);	
		}
	}
	bt(0,0);
	printf("%d",ans);
}
