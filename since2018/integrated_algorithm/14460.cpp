#include<stdio.h>
struct xy {
	int x, y;
	bool operator <(const xy p) { return x < p.x; }
}a[121212],temp[121212];
int bw[121212],b[121212];
int tree[1212121], tn;
int n, k;
void insert_g(int w, int g) {
	for (int i = w + tn - 1; i > 0; i /= 2)tree[i] += g;
}
int search_g(int ss, int ee) {
	int s = ss + tn - 1;
	int e = ee + tn - 1;
	int res = 0;
	while (s <= e) {
		if (s % 2 == 1)res += tree[s++];
		if (e % 2 == 0)res += tree[e--];
		s /= 2, e /= 2;
	}
	return res;
}
long long f(int s, int e) {
	if (s == e)return 0;
	int m = (s + e) / 2, i;
	long long res = f(s, m) + f(m + 1, e);
	int p1 = s, p2 = m + 1;
	for (i = s; i <= e; i++) {
		if (p2 == e + 1 || (p1 != m + 1 && a[p1] < a[p2])) {
			res += search_g(1, a[p1].y - k - 1) + search_g(a[p1].y+k+1,n);
			temp[i] = a[p1++];
		}
		else {
			insert_g(a[p2].y, 1);
			temp[i] = a[p2++];
		}
	}
	for (i = m + 1; i <= e; i++)insert_g(a[i].y, -1);
	for (i = s; i <= e; i++)a[i] = temp[i];
	return res;
}
int main() {
	int i, j;
	scanf("%d%d", &n, &k);
	for (tn = 1; tn < n; tn *= 2);
	for (i = 0; i < n; i++)scanf("%d", &a[i].y);
	for (i = 0; i < n; i++)scanf("%d", &b[i]), bw[b[i]] = i;
	for (i = 0; i < n; i++)a[i].x = bw[a[i].y];
	printf("%lld", f(0, n - 1));
	return 0;
}
