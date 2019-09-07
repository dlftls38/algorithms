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
#define INF 123456789
using namespace std;
vector<pair<int,int> > vv[20001];
int main(){
	int v,e;
	int i,j;
	scanf("%d%d",&v,&e);
	int start;
	scanf("%d",&start);
	int c[20001]={0};
	for(i=0;i<v+1;i++){
		c[i]=INF;
	}
	c[start]=0;
	priority_queue<pair<int,int> ,vector<pair<int,int> >, greater<pair<int,int> > >pq;
	for(i=0;i<e;i++){
		int z,x,c;
		scanf("%d%d%d",&z,&x,&c);
		vv[z].push_back(make_pair(x,c));
		if(z==start){
			pq.push(make_pair(c,x));
		}
	}
	int cur_val=0;
	int cur_pos;
	while(1){
		int len=pq.size();
		if(len==0){
			break;
		}
		for(i=0;i<len;i++){
			if(c[pq.top().second]>pq.top().first){
				c[pq.top().second]=pq.top().first;
				cur_val=pq.top().first;
				cur_pos=pq.top().second;
				pq.pop();
				break;
			}
			pq.pop();
		}
		len=vv[cur_pos].size();
		for(i=0;i<len;i++){
			if(c[vv[cur_pos][i].first]>cur_val+vv[cur_pos][i].second)
				pq.push(make_pair(cur_val+vv[cur_pos][i].second,vv[cur_pos][i].first));
		}
	}
	for(i=1;i<=v;i++){
		if(c[i]==INF){
			printf("INF\n");
		}
		else{
			printf("%d\n",c[i]);
		}
	}
}
