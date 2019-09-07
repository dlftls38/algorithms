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
int n,m;
int i,j;
int cost[502][502];
int bf(){
	int ans=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i+1<=n && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i][j+1];
				temp+=cost[i+1][j];
				temp+=cost[i+1][j+1];
				ans=max(ans,temp);
			}
			if(j+3<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i][j+1];
				temp+=cost[i][j+2];
				temp+=cost[i][j+3];
				ans=max(ans,temp);
			}
			if(i+3<=n){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+2][j];
				temp+=cost[i+3][j];
				ans=max(ans,temp);
			}
			if(i+2<=n && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+2][j];
				temp+=cost[i+2][j+1];
				ans=max(ans,temp);
			}
			if(i+1<=n && j+2<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+1][j+1];
				temp+=cost[i+1][j+2];
				ans=max(ans,temp);
			}
			if(i+2<=n && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i][j+1];
				temp+=cost[i+1][j];
				temp+=cost[i+2][j];
				ans=max(ans,temp);
			}
			if(i+1<=n && j+2<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i][j+1];
				temp+=cost[i][j+2];
				ans=max(ans,temp);
			}
			if(i+1<=n && j+2<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i][j+1];
				temp+=cost[i][j+2];
				temp+=cost[i+1][j+2];
				ans=max(ans,temp);
			}
			if(i+2<=n && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i][j+1];
				temp+=cost[i+1][j+1];
				temp+=cost[i+2][j+1];
				ans=max(ans,temp);
			}
			if(i+2<=n && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+1][j+1];
				temp+=cost[i+2][j+1];
				ans=max(ans,temp);
			}
			if(i+1<=n && j+2<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i][j+1];
				temp+=cost[i+1][j+1];
				temp+=cost[i+1][j+2];
				ans=max(ans,temp);
			}
			if(i+1<=n && j+2<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i][j+1];
				temp+=cost[i+1][j+1];
				temp+=cost[i][j+2];
				ans=max(ans,temp);
			}
			if(i+2<=n && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+1][j+1];
				temp+=cost[i+2][j];
				ans=max(ans,temp);
			}
			if(i+1<=n && j-2>=1){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+1][j-1];
				temp+=cost[i+1][j-2];
				ans=max(ans,temp);
			}
			if(i+2<=n && j-1>=1){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+2][j];
				temp+=cost[i+2][j-1];
				ans=max(ans,temp);
			}
			if(i+2<=n && j-1>=1){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+1][j-1];
				temp+=cost[i+2][j-1];
				ans=max(ans,temp);
			}
			if(i+1<=n && j-1>=1 && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i][j+1];
				temp+=cost[i+1][j-1];
				ans=max(ans,temp);
			}
			if(i+2<=n && j-1>=1){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+2][j];
				temp+=cost[i+1][j-1];
				ans=max(ans,temp);
			}
			if(i+1<=n && j-1>=1 && j+1<=m){
				int temp=0;
				temp+=cost[i][j];
				temp+=cost[i+1][j];
				temp+=cost[i+1][j+1];
				temp+=cost[i+1][j-1];
				ans=max(ans,temp);
			}
		}
	}
	return ans;
}
int main(){
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&cost[i][j]);
		}
	}
	printf("%d",bf());
}
