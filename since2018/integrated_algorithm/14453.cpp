#include<stdio.h>
int D[100001][2][3];
int trans[100];
int max(int a, int b) { if (a < b)return b; return a; }
int main() {
	trans['H'] = 0, trans['P'] = 1, trans['S'] = 2;
	int n;
	int i,j,p;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		char x;
		scanf(" %c", &x);
		for (j = 0; j <= 1; j++) {
			for (p = 0; p < 3; p++) {
				D[i][j][p] = D[i - 1][j][p];
				if (j > 0)D[i][j][p] = max(D[i][j][p],max(max(D[i - 1][j - 1][0], D[i - 1][j - 1][1]), D[i - 1][j - 1][2]));
				if (p == trans[x])
					D[i][j][p]++;
			}
		}
	}
	printf("%d", max(max(D[n][1][0], D[n][1][1]), D[n][1][2]));
}
