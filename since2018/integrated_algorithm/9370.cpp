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
#define INF 10000000
using namespace std;
int n;
priority_queue<pair<pair<int,int>,int> ,vector<pair<pair<int,int>,int> >, greater<pair<pair<int,int>,int> > > pq;
vector<pair<int,int> > vv[2001];
int cost[2001];
int before[2001];
int suspect[100];
void dijkstra(int start){
	int i,j;
	for(i=0;i<n+1;i++){
		cost[i]=INF;
	}
	cost[start]=0;
	for(i=0;i<vv[start].size();i++){
		pq.push(make_pair(make_pair(vv[start][i].second,vv[start][i].first),start));
		before[vv[start][i].first]=start;
	}
	int cur_val;
	int cur_pos;
	while(1){
		int len=pq.size();
		if(len==0){
			break;
		}
		for(i=0;i<len;i++){
			if(cost[pq.top().first.second]>pq.top().first.first){
				before[pq.top().first.second]=pq.top().second;
				cost[pq.top().first.second]=pq.top().first.first;
				cur_val=pq.top().first.first;
				cur_pos=pq.top().first.second;
				pq.pop();
				break;
			}
			pq.pop();
		}
		len=vv[cur_pos].size();
		for(i=0;i<len;i++){
			if(cost[vv[cur_pos][i].first]>cur_val+vv[cur_pos][i].second){
				pq.push(make_pair(make_pair(cur_val+vv[cur_pos][i].second,vv[cur_pos][i].first),cur_pos));
			}
		}
	}
}
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int m,t;
		scanf("%d%d%d",&n,&m,&t);
		int s,g,h;
		scanf("%d%d%d",&s,&g,&h);
		int i,j;
		int distance;
		for(i=0;i<m;i++){
			int a,b,d;
			scanf("%d%d%d",&a,&b,&d);
			vv[a].push_back(make_pair(b,d));
			vv[b].push_back(make_pair(a,d));
			if(a==g && b==h || a==h && b==g){
				distance=d;
			}
		}
		for(i=0;i<t;i++){
			scanf("%d",&suspect[i]);
		}
		sort(suspect,suspect+t);
		dijkstra(s);
		int cost1[2001]={0};
		for(i=0;i<=n;i++){
			cost1[i]=cost[i];
		}
		dijkstra(g);
		int cost2[2001]={0};
		for(i=0;i<=n;i++){
			cost2[i]=cost[i];
		}
		dijkstra(h);
		int cost3[2001]={0};
		for(i=0;i<=n;i++){
			cost3[i]=cost[i];
		}
		for(i=0;i<t;i++){
			if(cost1[suspect[i]]==cost1[g]+distance+cost3[suspect[i]] || cost1[suspect[i]]==cost1[h]+distance+cost2[suspect[i]]){
				printf("%d ",suspect[i]);
			}
			//printf("%d %d %d\n",cost1[suspect[i]],cost1[g]+distance+cost2[h],cost1[h]+distance+cost2[g]);
		}
		printf("\n");
//		set<int>ans;
//		for(i=0;i<t;i++){
//			int pos=suspect[i];
//			while(before[pos]!=0){
//				if(pos==g && before[pos]==h || pos==h && before[pos]==g){
//					ans.insert(suspect[i]);
//				}
//				pos=before[pos];
//			}
//		}
//		for(int it : ans){
//			printf("%d ",it);
//		}
		//printf("\n");
		for(i=0;i<=n;i++){
			vv[i].clear();
		}
//		memset(before,0,sizeof(before));
	}
}
