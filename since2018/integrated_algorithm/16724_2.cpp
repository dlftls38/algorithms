#include <iostream>
using namespace std;

char dtoi[200];
int p[1001][1001], chk[1001][1001], n, m;
int dx[] = { 0, 1, 0, -1 }, dy[] = { 1, 0, -1, 0 };

int dfs(int x, int y, int lev) {
	if (chk[x][y]) return chk[x][y];
	chk[x][y] = lev;
	return chk[x][y] = dfs(x + dx[p[x][y]], y + dy[p[x][y]], lev);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	dtoi['R'] = 0; dtoi['D'] = 1; dtoi['L'] = 2; dtoi['U'] = 3;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char x;
			cin >> x;
			p[i][j] = dtoi[x];
		}
	}
	int ans = 0, lev = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x = dfs(i, j, lev); 
			if (x == lev) lev++;
		}
	}
	cout << lev - 1;
}
