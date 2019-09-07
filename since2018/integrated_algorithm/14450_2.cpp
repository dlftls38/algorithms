#include<cstdio>
#include<algorithm>
using namespace std;
const int MXN = 1e5;
int n, m, s[3][MXN + 1], dp[22][MXN + 1];
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        char c;
        scanf(" %c", &c);
        for (int j = 0; j < 3; j++) s[j][i] += s[j][i - 1] + (j == (c - 'A') / 8);
    }
    for (int i = 1; i <= m + 1; i++) {
        int maxi[3] = { 0,0,0 };
        for (int j = 1; j <= n; j++) {
            for (int k = 0; k < 3; k++) {
                maxi[k] = max(maxi[k], dp[i - 1][j] - s[k][j]);
                dp[i][j] = max(dp[i][j], maxi[k] + s[k][j]);
            }
        }
    }
    printf("%d", dp[m + 1][n]);
    return 0;
}
