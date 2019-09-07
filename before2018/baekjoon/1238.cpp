#include <cstdio>
#include <vector> // vector
#include <functional> // greater
#include <queue> // priority_queue<E,vector<E>,greater<E> > - √÷º“»¸
#define M 987654321
using namespace std;
typedef pair<int,int> ii; // idx,dist
vector<vector<ii>> map(20001);
int okay[1001];
int dijkstra(int size,int start,int end){
	priority_queue<ii,vector<ii>,greater<ii> > pq;
	vector<int> dist(20001,M);
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
	if(end==10000){
		for(int i=1;i<size+1;i++){
			okay[i]=dist[i];
		}
		return 0;
	}
	return dist[end];
}
int main(){
	int i;
	int n,m,x;
	scanf("%d%d%d",&n,&m,&x);
	for(i=0;i<m;i++){
		int q,qq,qqq;
		scanf("%d%d%d",&q,&qq,&qqq);
		map[q].push_back(ii(qq,qqq));
	}
	int max=0;
	dijkstra(n,x,10000);
	for(i=1;i<n+1;i++){
		int some = dijkstra(n,i,x) + okay[i];
		if(max<some){
			max = some;
		}
	}
	printf("%d",max);
}
