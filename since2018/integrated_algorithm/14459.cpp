#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int tn, tree[1212121];
int max(int a, int b) { if (a < b)return b; return a; }
void insert_g(int w, int g) {
	for (int i = w + tn; i > 0; i /= 2) tree[i] = max(tree[i], g);
}
int search_g(int ss, int ee) {
	int s = ss + tn;
	int e = ee + tn;
	int res = 0;
	while (s <= e) {
		if (s % 2 == 1)res = max(res, tree[s++]);
		if (e % 2 == 0)res = max(res, tree[e--]);
		s /= 2; e /= 2;
	}
	return res;
}
int a[121212], b[121212], bw[121212];
int main() {
	int n, i, j;
	scanf("%d", &n);
	for (tn = 1; tn < n; tn *= 2);
	for (i = 0; i < n; i++)scanf("%d", &a[i]);
	for (i = 0; i < n; i++)scanf("%d", &b[i]),bw[b[i]]=i;
	for (i = 0; i < n; i++) {
		vector<int>L;
		for (j = -4; j <= 4; j++) {
			if (a[i] + j <= 0 || a[i] + j>n)continue;
			L.push_back(bw[a[i] + j]);
		}
		sort(L.begin(), L.end());
		for (j = L.size() - 1; j >= 0; j--) {
			int next = L[j];
			insert_g(next, search_g(0, next - 1) + 1);
		}
	}
	printf("%d", tree[1]);
	return 0;
}
