#include<bits/stdc++.h>
 
 
using namespace std;
using cdbl = complex<long double>;
 
const long double PI = acos(-1.L);
 
inline unsigned bitreverse(const unsigned n, const unsigned k) {
    unsigned r, i;
    for (r = 0, i = 0; i < k; ++i)
        r |= ((n >> i) & 1) << (k - i - 1);
    return r;
}
 
void fft(vector<cdbl> &a, bool is_reverse=false) {
    const unsigned n = a.size(), k = __builtin_ctz(n);
    unsigned s, i, j;
    for (i = 0; i < n; i++) {
        j = bitreverse(i, k);
        if (i < j)
            swap(a[i], a[j]);
    }
    for (s = 2; s <= n; s *= 2) {
        vector<cdbl> w(s/2);
        for (i = 0; i < s/2; i++) {
            long double t = 2*PI*i/s * (is_reverse? -1 : 1);
            w[i] = cdbl(cos(t), sin(t));
        }
        for (i = 0; i < n; i += s) {
            for (j = 0; j < s/2; j++) {
                cdbl tmp = a[i + j + s/2] * w[j];
                a[i + j + s/2] = a[i + j] - tmp;
                a[i + j] += tmp;
            }
        }
    }
    if (is_reverse)
        for (i = 0; i < n; i++)
            a[i] /= n;
}
 
void convolution(vector<cdbl> &a, vector<cdbl> &b) {
    const unsigned n = a.size();
    fft(a);
    fft(b);
    for (unsigned i = 0; i < n; i++)
        a[i] *= b[i];
    fft(a, true);
}
 
 
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n, m, k, d, cnt = 0;
    vector<cdbl> a(524288, 0);
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[k] = 1;
    }
    a[0] = 1;
 
    fft(a);
    for (int i = 0; i < 524288; i++)
        a[i] *= a[i];
    fft(a, true);
 
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> d;
        if (int(a[d].real() + (a[d].real() > 0? 0.5 : -0.5)) != 0)
            cnt++;
    }
 
    cout << cnt;
 
    return 0;
}
