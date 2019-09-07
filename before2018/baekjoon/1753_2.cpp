#include <cstdio>
#include <vector> // vector
#include <functional> // greater
#include <queue> // priority_queue<E,vector<E>,greater<E> > - √÷º“»¸
#define M 987654321
using namespace std;
typedef pair<int,int> ii; // idx,dist
vector<vector<ii>> map(20001);
vector<int> dist(20001,M);
priority_queue<ii,vector<ii>,greater<ii> > pq;
void dijkstra(int size,int start){
	dist[start]=0;
	pq.push(ii(start,0));
	while(!pq.empty()){
		int v=pq.top().first,value=pq.top().second;
		pq.pop();
		if(dist[v]<value) continue;
		for(int i=0;i<map[v].size();i++){
			if(dist[map[v][i].first]>dist[v]+map[v][i].second){
				dist[map[v][i].first]=dist[v]+map[v][i].second;
				pq.push(ii(map[v][i].first,dist[map[v][i].first]));
			}
		}
	}
}
int main(){
	int i;
	int v,e;
	int s;
	scanf("%d%d%d",&v,&e,&s);
	for(i=0;i<e;i++){
		int q,qq,qqq;
		scanf("%d%d%d",&q,&qq,&qqq);
		map[q].push_back(ii(qq,qqq));
	}
	dijkstra(v,s);
	for(i=1;i<=v;i++){
		if(dist[i]==M){
			printf("INF\n");
		}
		else{
			printf("%d\n",dist[i]);
		}
	}
}
