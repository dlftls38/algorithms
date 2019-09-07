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
double dist(int x1,int y1,int x2,int y2){
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2))/10;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	vector<pair<int,int> >temp;
	temp.push_back(make_pair(0,0));
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		temp.push_back(make_pair(q,w));	
	}
	temp.push_back(make_pair(10000,10000));
	vector<pair<double,int>>v[1002];
	for(i=0;i<n+2;i++){
		for(j=0;j<n+2;j++){
			v[i].push_back(make_pair(dist(temp[j].first,temp[j].second,temp[i].first,temp[i].second),j));
		}
	}
	int l=0;
	int r=1500;
	int mid;
	int ans;
	while(l<=r){
		mid=(l+r)/2;
		int dis=1500;
		int visit[1002]={0};
		visit[0]=1;
		queue<pair<int,int> >q;
		q.push(make_pair(0,-1));
		int min_count=INT_MAX;
		while(!q.empty()){
			int cur=q.front().first;
			int count=q.front().second;
			if(cur==n+1){
				min_count=min(min_count,count);
			}
			q.pop();
			for(i=0;i<n+2;i++){
				if(visit[v[cur][i].second]==0 && v[cur][i].first<=mid){
					visit[v[cur][i].second]=1;
					q.push(make_pair(v[cur][i].second,count+1));
				}
			}
		}
		if(min_count<=k){
			r=mid-1;
			ans=mid;
		}
		else{
			l=mid+1;
		}
	}
	printf("%d",ans);
}
