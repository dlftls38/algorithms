#include <cstdio>
#include <vector> // vector
#include <functional> // greater
#include <queue> // priority_queue<E,vector<E>,greater<E> > - 최소힙
//#include <stack> // 경로추적
#define INF 987654321
using namespace std;
typedef pair<int,int> ii; // dist,idx
typedef vector<vector<ii> > MAP;
int n;
int dijkstra(MAP &map,int size,int start){
	vector<int> dist(size+1,INF);
	//vector<int> path(size+1,-1); // -1 이면 거치지 않는 점, 0이면 시작 점
	priority_queue<ii,vector<ii>,greater<ii> > pq;
	dist[start]=0;
	//path[start]=0;
	pq.push(ii(dist[start],start));
	while(!pq.empty()){
		int v=pq.top().second,value=pq.top().first;
		pq.pop();
		printf("%d %d\n",v,value);
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
	return dist[size];
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
	int count=1;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		int i,j;
		int some[126][126];
		MAP map(n*n+1);
		for(i=1;i<n+1;i++){
			for(j=1;j<n+1;j++){
				int x;
				scanf("%d",&x);
				some[i][j]=x;
			}
		}
		map[1].push_back(ii(some[1][2],2));
		map[1].push_back(ii(some[2][1],1+n));
		for(i=2;i<n;i++){
			map[i].push_back(ii(some[1][i-1],i-1));
			map[i].push_back(ii(some[1][i+1],i+1));
			map[i].push_back(ii(some[2][i],i+n));
		}
		map[n].push_back(ii(some[1][n-1],n-1));
		map[n].push_back(ii(some[2][n],2*n));
		for(i=n+1;i<=n*(n-1);i+=n){
			map[i].push_back(ii(some[(i-n)/n+1][i%n],i-n));
			map[i].push_back(ii(some[(i+n)/n+1][i%n],i+n));
			map[i].push_back(ii(some[i/n+1][(i+1)%n],i+1));
			for(j=1;j<n-1;j++){
				map[i+j].push_back(ii(some[(i+j)/n+1][(i+j-1)%n],i+j-1));
				map[i+j].push_back(ii(some[(i+j)/n+1][(i+j+1)%n],i+j+1));
				map[i+j].push_back(ii(some[(i+j+n)/n+1][(i+j)%n],i+j+n));
				map[i+j].push_back(ii(some[(i+j-n)/n+1][(i+j)%n],i+j-n));
			}
			map[i].push_back(ii(some[(i-n)/n+1][(i)%n],i-n));
			map[i].push_back(ii(some[(i+n)/n+1][(i)%n],i+n));
			map[i].push_back(ii(some[i/n+1][(i-1)%n],i-1));
		}
		map[n*(n-1)+1].push_back(ii(some[(n*(n-2)+1)/n+1][(n*(n-1)+1)%n],n*(n-2)+1));
		map[n*(n-1)+1].push_back(ii(some[(n*(n-1)+1)/n+1][(n*(n-1)+2)%n],n*(n-1)+2));
		for(i=n*(n-1)+2;i<n*n;i++){
			map[i].push_back(ii(some[i/n+1][(i-1)%n],i-1));
			map[i].push_back(ii(some[i/n+1][(i+1)%n],i+1));
			map[i].push_back(ii(some[(i-n)/n+1][(i)%n],i-n));
		}
		map[n*n].push_back(ii(some[(n*n)/n][(n*n-1)%n],n*n-1));
		map[n*n].push_back(ii(some[(n*(n-1))/n][n],n*(n-1)));
		printf("Problem %d: %d\n",count,dijkstra(map,n*n,1)+some[1][1]);
		count++;
	}
}
