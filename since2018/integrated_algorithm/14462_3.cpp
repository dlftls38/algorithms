#include<stdio.h>
int D[1212][1212];
int a[1212], b[1212];
int max(int a, int b) {	if (a < b)return b; return a;}
int jd(int x) { if (x < 0)return -x; return x; }
int main() {
	int n,i,j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)scanf("%d", &a[i]);
	for (i = 1; i <= n; i++)scanf("%d", &b[i]);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (jd(a[i] - b[j]) <= 4) D[i][j] = D[i - 1][j - 1] + 1;
			else D[i][j] = max(D[i - 1][j], D[i][j - 1]);
		}
	}
	printf("%d", D[n][n]);
	return 0;
}
