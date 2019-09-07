#include <cstdio>
#include <vector> // vector
#include <functional> // greater
#include <queue> // priority_queue<E,vector<E>,greater<E> > - 최소힙
//#include <stack> // 경로추적
#define INF 987654321
using namespace std;
typedef pair<int,int> ii; // dist,idx
typedef vector<vector<ii> > MAP;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	MAP map(n+1);
	int check[1001]={0};
	int i,j;
	priority_queue<ii,vector<ii>,greater<ii> > pq;
	for(i=0;i<m;i++){
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		map[u].push_back(ii(w,v));
		map[v].push_back(ii(w,u));
	}
	for(i=0;i<map[1].size();i++){
		pq.push(ii(map[1][i].first,map[1][i].second));
	}
	int count=1;
	int ans=0;
	check[1]=1;
	while(count<n){
		for(i=0;i<pq.size();i++){
			if(check[pq.top().second]==1){
				pq.pop();
			}
			else{
				int k=pq.top().second;
				check[k]=1;
				ans+=pq.top().first;
				pq.pop();
				for(j=0;j<map[k].size();j++){
					pq.push(ii(map[k][j].first,map[k][j].second));
				}
				count++;
				break;
			}
		}
	}
	printf("%d",ans);
}
