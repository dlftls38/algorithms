#include <cstdio>
#include <vector> // vector
#include <functional> // greater
#include <queue> // priority_queue<E,vector<E>,greater<E> > - 최소힙
//#include <stack> // 경로추적
#define INF 987654321
using namespace std;
typedef pair<int,int> ii; // dist,idx
typedef vector<vector<ii> > MAP;
int dijkstra(MAP &map,int size,int start,int end){
	vector<int> dist(size+1,INF);
	//vector<int> path(size+1,-1); // -1 이면 거치지 않는 점, 0이면 시작 점
	priority_queue<ii,vector<ii>,greater<ii> > pq;
	dist[start]=0;
	//path[start]=0;
	pq.push(ii(dist[start],start));
	while(!pq.empty()){
		int v=pq.top().second,value=pq.top().first;
		pq.pop();
		if(dist[v]<value) continue;
		for(int i=0;i<map[v].size();i++){
			int vv=map[v][i].second,cost=map[v][i].first;
			if(dist[vv]>dist[v]+cost){
				dist[vv]=dist[v]+cost;
				//path[vv]=v;
				pq.push(ii(dist[vv],vv));
			}
		}
	}
	return dist[end];
	/*for(int i=1;i<=size;i++){
		if(dist[i]==INF) puts("INF");
		else printf("%d\n",dist[i]);
	}*/
	/*printf("===========PATH==========\n");
	for(int i=1;i<=size;i++){
		printf("%d -> %d 경로 : ",start,i);
		if(path[i]==-1){
			printf("없음\n");
			continue;
		}
		stack<int> s;
		s.push(i);
		while(s.top()!=start)
			s.push(path[s.top()]);
		while(s.size()>1){
			printf("%d -> ",s.top());
			s.pop();
		}
		printf("%d\n",s.top());
	}
	printf("===========PATH==========\n");*/
}
int main(){
	int n,m;
	int start,end;
	scanf("%d%d",&n,&m);
	MAP map(n+1);
	for(int i=0;i<m;i++){
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		map[u].push_back(ii(w,v));
	}
	scanf("%d%d",&start,&end);
	printf("%d",dijkstra(map,n,start,end));
	return 0;
}
