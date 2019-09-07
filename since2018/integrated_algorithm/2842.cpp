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
int cost[52][52];
char town[53][53];
int cc;
int s,e;
int start,boundary;
int temp;
void bfs(){
	int check[52][52]={0};
	queue<pair<int,int> >q;
	q.push(make_pair(s,e));
	check[s][e]=1;
	int c=0;
	while(!q.empty()){
		int y=q.front().first;
		int x=q.front().second;
		q.pop();
		if(cost[y][x]<start || cost[y][x]>start+boundary){
			break;
		}
		if(cost[y-1][x-1]>=start && cost[y-1][x-1]<=start+boundary && check[y-1][x-1]==0){
			check[y-1][x-1]=1;
			q.push(make_pair(y-1,x-1));
			if(town[y-1-1][x-1-1]=='K')
				c++;
		}
		if(cost[y-1][x]>=start && cost[y-1][x]<=start+boundary && check[y-1][x]==0){
			check[y-1][x]=1;
			q.push(make_pair(y-1,x));
			if(town[y-1-1][x-1]=='K')
				c++;
		}
		if(cost[y-1][x+1]>=start && cost[y-1][x+1]<=start+boundary && check[y-1][x+1]==0){
			check[y-1][x+1]=1;
			q.push(make_pair(y-1,x+1));
			if(town[y-1-1][x+1-1]=='K')
				c++;
		}
		if(cost[y][x-1]>=start && cost[y][x-1]<=start+boundary && check[y][x-1]==0){
			check[y][x-1]=1;
			q.push(make_pair(y,x-1));
			if(town[y-1][x-1-1]=='K')
				c++;
		}
		if(cost[y][x+1]>=start && cost[y][x+1]<=start+boundary && check[y][x+1]==0){
			check[y][x+1]=1;
			q.push(make_pair(y,x+1));
			if(town[y-1][x+1-1]=='K')
				c++;
		}
		if(cost[y+1][x-1]>=start && cost[y+1][x-1]<=start+boundary && check[y+1][x-1]==0){
			check[y+1][x-1]=1;
			q.push(make_pair(y+1,x-1));
			if(town[y+1-1][x-1-1]=='K')
				c++;
		}
		if(cost[y+1][x]>=start && cost[y+1][x]<=start+boundary && check[y+1][x]==0){
			check[y+1][x]=1;
			q.push(make_pair(y+1,x));
			if(town[y+1-1][x-1]=='K')
				c++;
		}
		if(cost[y+1][x+1]>=start && cost[y+1][x+1]<=start+boundary && check[y+1][x+1]==0){
			check[y+1][x+1]=1;
			q.push(make_pair(y+1,x+1));
			if(town[y+1-1][x+1-1]=='K')
				c++;
		}
		if(c==cc){
			break;
		}
	}
	//printf("c=%d\n",c);
	if(c==cc){
		temp= boundary;
	}
	else{
		temp= INT_MAX;
	}
}
int main(){
	int kmn=INT_MAX;
	int kmx=-1;
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",town[i]);
		for(j=0;j<n;j++){
			if(town[i][j]=='K'){
				cc++;
			}
			if(town[i][j]=='P'){
				s=i+1;
				e=j+1;
			}
		}
	}
	for(i=0;i<=n+1;i++){
		for(j=0;j<=n+1;j++){
			cost[i][j]=3000000;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if(town[i-1][j-1]=='K' || town[i-1][j-1]=='P'){
				kmn=min(kmn,cost[i][j]);
				kmx=max(kmx,cost[i][j]);
			}
		}
	}
	int l=0;
	int r=999999;
	int ans;
	while(l<=r){
		boundary=(l+r)/2;
		temp=INT_MAX;
		for(i=1;i<=1000000;i++){
			start=i;
			if(kmn>=i && kmn<=i+boundary && kmx>=i && kmx<=i+boundary){
				bfs();
			}
			if(temp==boundary){
				break;
			}
		}
		//printf("%d %d\n",boundary,temp);
		if(temp==INT_MAX){
			l=boundary+1;
		}
		else{
			r=boundary-1;
			ans=boundary;
		}
	}
	printf("%d",ans);
}
