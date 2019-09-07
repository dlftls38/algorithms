#include <bits/stdc++.h>

using namespace std;

vector<int> parent, level;

int find(int v) {
	if (v == parent[v]) return v;
	return parent[v] = find(parent[v]);
}

long long pair_count;

long long sum(int cnt) {
	return 1LL * cnt * (cnt - 1) / 2;
}

void merge(int u, int v) {
	u = find(u);
	v = find(v);
	
	if (level[u] > level[v]) swap(u, v);
	
	pair_count -= sum(level[u]);
	pair_count -= sum(level[v]);
	
	level[v] += level[u];
	
	pair_count += sum(level[v]);
	
	parent[u] = v;
}

int main() {
	int n, m;
	scanf("%d%d",&n,&m);
	parent = level = vector<int>(n, 1);
	iota(parent.begin(), parent.end(), 0);
	vector<pair<int, pair<int, int>>> link_cost(n - 1);
	for (int i = 0; i < n - 1; ++i) {
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		u--;
		v--;
		link_cost[i].first=w;
		link_cost[i].second.first=u;
		link_cost[i].second.second=v;
	}
	vector<pair<int, int>> query(m);
	vector<long long> ans(m);
	for (int i = 0; i < m; ++i) {
		int q;
		scanf("%d",&q);
		query[i].first=q;
		query[i].second = i;
	}
	
	sort(link_cost.begin(), link_cost.end());
	sort(query.begin(), query.end());
	
	int pos = 0;
	for (int i = 0; i < m; ++i) {
		while (pos < n - 1 && link_cost[pos].first <= query[i].first) {
			int u = link_cost[pos].second.first;
			int v = link_cost[pos].second.second;
			merge(u, v);
			pos++;
		}
		ans[query[i].second] = pair_count;
	}
	
	for (int i = 0; i < m; ++i) {
		printf("%lld ",ans[i]);
	}
}
