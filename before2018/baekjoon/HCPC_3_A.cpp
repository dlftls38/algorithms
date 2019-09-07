#include <cstdio>
#include <functional>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int,int> p;
vector<vector<p> > path(505);
priority_queue<p,vector<p>,greater<p> > pq;
int main(){
	int check[505]={0},gold=0,sli=0,cop=0,n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		path[a].push_back(p(b,c));
		path[b].push_back(p(a,c));
	}
	for(int i=0;i<path[1].size();i++){
		pq.push(p(path[1][i].second,path[1][i].first));
	}
	check[1]=1;
	while(!pq.empty()){
		p hi = pq.top();
		if(check[hi.second]!=1){
			if(hi.first==0){
				gold++;
			}
			else if(hi.first==1){
				sli++;
			}
			else if(hi.first==2){
				cop++;
			}
			check[hi.second]=1;
			pq.pop();
			for(int i=0;i<path[hi.second].size();i++){
				if(check[path[hi.second][i].first]==1){
					continue;
				}
				pq.push(p(path[hi.second][i].second,path[hi.second][i].first));
			}
		}
		else{
			pq.pop();
		}
	
	}
	int sum=0;
	for(int i=1;i<=n;i++){
			sum+=check[i];
	}
	if(sum==n){
		printf("%d %d %d",gold,sli,cop);
	}
	else{
		printf("-1\n");
	}
}
