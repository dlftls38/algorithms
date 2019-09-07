#include <cstdio>

using namespace std;

const int MOD = 1000000007;

int a[100];
int c[100];
int r[100];
int t[200];

void init_a(int m) {
    for (int i = 0; i < m; ++i) a[i] = 1;
}
void init_c(int m) {
    for (int i = 0; i < m; ++i) c[i] = 0;
    ++c[0];
    ++c[m-1];
}

int kitamasa(int m, long long n) {
    long long nv = 1;
    while (n >= m) nv = nv * 2 + n % 2, n /= 2;
    for (int i = 0; i < m; ++i) r[i] = 0;
    r[n] = 1;

    for ( ; nv > 1; nv /= 2) {
        int ofs = nv % 2;
        for (int i = 0; i < m*2; ++i) t[i] = 0;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < m; ++j) {
                int& z = t[i+j+ofs];
                z += 1LL*r[i]*r[j]%MOD;
                if (z >= MOD) z-=MOD;
            }
        for (int i = m; i-- > 0; ) {
            int v = t[i+m];
            for (int j = 0; j < m; ++j) {
                int& z = t[i+j];
                z += 1LL * c[j] * v % MOD;
                if (z >= MOD) z -= MOD;
            }
        }
        for (int i = 0; i < m; ++i) r[i] = t[i];
    }

    int z = 0;
    for (int i = 0; i < m; ++i) {
                z += 1LL * a[i] * r[i] % MOD;
                if (z >= MOD) z -= MOD;
    }
    return z;

}

int main() {
    long long n; int m;
    scanf("%lld%d", &n, &m);
    init_a(m);
    init_c(m);
    int ans = kitamasa(m, n);
    printf("%d\n", ans);
}
