#include <bits/stdc++.h>
 
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define whatIs(a) cout << #a " is " << (a) << endl;
 
using namespace std;
 
typedef pair<long long, long long> pt;
typedef vector<int> vi;
 
const int N = 300005;
const long long base = 998244353;
const long long inf = 1e18+7;
clock_t t1,t2;
long long n, m, k;
pt a[N];
map <int, int> ma, mb;
map <pt, int> Mab;
long long gt[N];
pt d[N];
 
void Input () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        d[i] = mp(u, v);
        ma[u]++; mb[v]++;
        Mab[mp(u, v)]++;
    }
}
 
void Solve () {
    long long a = 1, b = 1, c = 1, ans = 1;
    gt[0] = 1;
    for (int i = 1; i <= n; i++) {
        ans = (ans * i) % base;
        gt[i] = (gt[i-1] * i) % base;
    }
    for (auto x:ma) {
        a *= gt[x.se];
        a %= base;
    }
    for (auto x:mb) {
        b *= gt[x.se];
        b %= base;
    }
    
    sort(d, d+n);
    for (int i = 0; i < n - 1; i++) {
        if (d[i].se > d[i+1].se) {
            c = 0;
            break;
        }
        c *= gt[Mab[d[i]]];
        Mab[d[i]] = 1;
        c %= base;
    }
    
    ans = (ans - a - b + c + 2*base) % base;
    cout << ans << endl;
}
 
main () {
    Input();
    Solve();
}
