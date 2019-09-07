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
int cost[10001];
vector<pair<int, int> >v[10001];
int main(){
	priority_queue<pair<int, int> >pq;
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	int start,end;
	scanf("%d%d",&start,&end);
	int size=v[start].size();
	cost[start]=INT_MAX;
	for(i=0;i<size;i++){
		auto vv=v[start][i];
		if(cost[vv.first]<vv.second){
			cost[vv.first]=vv.second;
			pq.push(make_pair(vv.second,vv.first));
		}
	}
	while(!pq.empty()){
		int cur_pos=pq.top().second;
		int cur_val=pq.top().first;
		pq.pop();
		if(cur_val<cost[cur_pos]){
			continue;
		}
		int size=v[cur_pos].size();
		for(i=0;i<size;i++){
			auto vv=v[cur_pos][i];
			if(cost[vv.first]<vv.second){
				if(cur_val<=vv.second){
					if(cur_val>cost[vv.first]){
						cost[vv.first]=cur_val;
						pq.push(make_pair(cur_val,vv.first));
					}
				}
				else{
					cost[vv.first]=vv.second;
					pq.push(make_pair(vv.second,vv.first));
				}
			}
		}
	}
	printf("%d",cost[end]);
}
