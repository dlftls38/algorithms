#include <cstdio>
#include <algorithm>
#include <vector> // vector
#include <functional> // greater
#include <queue> // priority_queue<E,vector<E>,greater<E> > - 최소힙
//#include <stack> // 경로추적
#define INF 987654321
using namespace std;
typedef pair<int,int> ii; // dist,idx
typedef vector<vector<ii> > MAP;
ii x[100000];
ii y[100000];
ii z[100000];
int check[100000]={0};
int main(){
	int n;
	scanf("%d",&n);
	MAP map(n);
	int i,j;
	priority_queue<ii,vector<ii>,greater<ii> > pq;
	for(i=0;i<n;i++){
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		x[i].first=u;
		x[i].second=i;
		y[i].first=v;
		y[i].second=i;
		z[i].first=w;
		z[i].second=i;
	}
	sort(x,x+n);
	sort(y,y+n);
	sort(z,z+n);
	for(i=0;i<n-1;i++){
		map[x[i].second].push_back(ii(x[i+1].first-x[i].first,x[i+1].second));
		map[x[i+1].second].push_back(ii(x[i+1].first-x[i].first,x[i].second));
		map[y[i].second].push_back(ii(y[i+1].first-y[i].first,y[i+1].second));
		map[y[i+1].second].push_back(ii(y[i+1].first-y[i].first,y[i].second));
		map[z[i].second].push_back(ii(z[i+1].first-z[i].first,z[i+1].second));
		map[z[i+1].second].push_back(ii(z[i+1].first-z[i].first,z[i].second));
	}
	for(i=0;i<map[0].size();i++){
		pq.push(ii(map[0][i].first,map[0][i].second));
	}
	int count=1;
	long long ans=0;
	check[0]=1;
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
	printf("%lld",ans);
}
