#include <bits/stdc++.h>
 
using namespace std;
 
int n, r, m, ans, dp[60005];
pair<int, int> p[105];
 
bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	return a.first + a.second > b.first + b.second;
}
 
int main() {
	scanf("%d%d", &n, &r);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &p[i].first, &p[i].second);
		p[i].first = max(p[i].first, -p[i].second);
	}
	sort(p, p + n);
	for (int i = 0; i < n; i++)
		if (p[i].second >= 0 && r >= p[i].first) {
			r += p[i].second;
			ans++;
		}
	for (int i = 0; i < n; i++)
		if (p[i].second < 0)
			p[m++] = p[i];
	sort(p, p + m, cmp);
	for (int i = 0; i < m; i++){
		for (int j = p[i].first; j <= r; j++){
			dp[j + p[i].second] = max(dp[j + p[i].second], dp[j] + 1);
			printf("%d  ",j + p[i].second);
		}
		printf("\n");
	}
	for (int i = 1; i <= r; i++)
		dp[0] = max(dp[0], dp[i]);
	printf("%d\n", ans + dp[0]);
	// puts(ans == n ? "YES" : "NO");
}
/*
6 20
81 -1
45 -6
34 -15
10 34
1 27
40 -45
*/
