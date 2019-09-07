#include<stdio.h>
int a[121212], b[121212], A[121212], B[121212];
int W[121212], ori[121212], w_j[121212];
long long f(int s, int e) {
	if (s >= e)return 0;
	int m = (s + e) / 2;
	long long res = f(s, m) + f(m + 1, e);
	int i, j, p1 = s, p2 = m + 1;
	w_j[s - 1] = m;
	for (i = s; i <= m; i++) {
		w_j[i] = w_j[i - 1];
		while (w_j[i]<e&&a[i]>a[w_j[i] + 1]) w_j[i]++;
	}
	for (i = s; i <= m; i++) res += w_j[i] - (m + 1) + 1;
	for (i = s; i <= e; i++) {
		if (p1 == m + 1 || (p2!=e+1 && a[p1]>a[p2])) b[i] = a[p2++];
		else b[i] = a[p1++];
	}
	for (i = s; i <= e; i++) a[i] = b[i];
	return res;
}
long long go(int *A, int *B, int n) {
	int i;
	for (i = 1; i <= n; i++) W[B[i]] = i;
	for (i = 1; i <= n; i++) a[i] = W[A[i]], ori[i] = a[i];
	long long now = f(1, n);
	long long  ans = now;
	for (i = 1; i <= n; i++) {
		now += +(n - ori[i]) - (ori[i] - 1);
		if (ans > now)ans = now;
	}
	return ans;
}
long long min(long long a, long long b) { if (a < b)return a; return b; }
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &A[i]);
	for (i = 1; i <= n; i++) scanf("%d", &B[i]);
	printf("%lld", min(go(A, B, n), go(B, A, n)));
	return 0;
}
