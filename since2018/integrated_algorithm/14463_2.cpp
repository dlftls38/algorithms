#include<stdio.h>
int tree[1212121], tn;
void insert_g(int w, int g) {
	for (int i = tn + w; i > 0; i /= 2) {
		tree[i] += g;
	}
}
int search_g(int ss,int ee) {
	int s = ss + tn;
	int e = ee + tn;
	int res = 0;
	while (s <= e) {
		if (s % 2 == 1)res += tree[s++];
		if (e % 2 == 0)res += tree[e--];
		s /= 2; e /= 2;
	}
	return res;
}
int W[51515];
int main() {
	int n, ans = 0 , i;
	scanf("%d", &n);
	for (tn = 1; tn <= n * 2; tn *= 2);
	for (i = 1; i <= 2 * n; i++) {
		int x;
		scanf("%d", &x);
		if (W[x] == 0) {
			W[x] = i;
			insert_g(i, 1);
		}
		else {
			ans += search_g(W[x] + 1, i - 1);
			insert_g(W[x], -1);
		}
	}
	printf("%d", ans);
	return 0;
}
