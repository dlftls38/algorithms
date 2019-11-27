#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll maxn = 100005;
const ll mod = 1e9 + 7;
vector<int> mmp[maxn];
ll a[maxn];
ll ans, n;
 
map<ll,ll>  ret[maxn];
 
void dfs(int x, int f,int dep) {
    ret[dep].clear();
    ret[dep][a[x]] ++;
    ans = (ans + a[x])%mod;
    for (pll p: ret[dep-1]) {
        ll g = __gcd(p.first,a[x]);
        ans = (ans + g%mod*p.second)%mod;
        ret[dep][g] += p.second;
    }
 
    for ( int y: mmp[x] ) {
        if (y==f) continue;
        dfs(y,x,dep+1);
    }
}
 
int main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        mmp[x].push_back(y);
        mmp[y].push_back(x);
    }
 
    dfs(1, 1,1);
 
    printf("%lld\n", ans);
 
    return 0;
}
