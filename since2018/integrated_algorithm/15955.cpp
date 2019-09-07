#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
#define pii pair<int,int>
using namespace std;
typedef long long ll;
int parent[250001], level[250001];
bool ok[250001];
int find(int a) {
	if (a == parent[a]) return a;
	return parent[a] = find(parent[a]);
}
void Union(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return;
	if (level[a] > level[b]) swap(a, b);
	parent[a] = b;
	if (level[a] == level[b]) ++level[b];
}
vector <pii> x, y;
vector <pair<int, pii> > dist;
vector <tuple<int, int, int, int> > query;
int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	int i,j;
	for(i = 1; i <= n; i++){
		parent[i] = i;
		level[i] = 1;	
	}
	for(i=0;i<n;i++) {
		int xi,yi;
		scanf("%d%d",&xi,&yi);
		x.push_back({ xi, i + 1 });
		y.push_back({ yi, i + 1 });
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	for(i=0;i<n-1; i++){
		dist.push_back({ x[i + 1].first - x[i].first, { x[i].second,x[i + 1].second } });
		dist.push_back({ y[i + 1].first - y[i].first, { y[i].second,y[i + 1].second } });
	}
	sort(dist.begin(), dist.end());
	for(i = 0; i < q; i++) {
		int ai,bi,xi;
		scanf("%d%d%d",&ai,&bi,&xi);
		query.push_back(make_tuple(xi,ai,bi,i));
	}
	sort(query.begin(), query.end());
	int pos = 0;
	for (i = 0; i < q; i++) {
		int gap = get<0>(query[i]);
		while (pos < dist.size() && gap >= dist[pos].first) {
			Union(dist[pos].second.first, dist[pos].second.second);
			pos++;
		}
		if (find(get<1>(query[i])) == find(get<2>(query[i]))){
			ok[get<3>(query[i])] = true;	
		}
	}
	for(i=0;i<q;i++){
		if(ok[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
