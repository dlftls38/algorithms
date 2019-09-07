#include <cstdio>
#include <algorithm>
#define MAX_N 3000
#define MAX_Y 100000
using namespace std;
struct m {
    int x, y1, y2, z;
};
bool cmp(m a, m b) {
    return a.x < b.x;
}
int n, seg[4 * MAX_Y], a, b, c, d, cnt[4 * MAX_Y], last;
m arr[2 * MAX_N];
long long res;
void update(int lo, int hi, int val, int node, int x, int y) {
    if (y < lo || hi < x)
        return;
    if (lo <= x&&y <= hi)
        cnt[node] += val;
    else {
        int mid = (x + y) >> 1;
        update(lo, hi, val, node * 2, x, mid);
        update(lo, hi, val, node * 2 + 1, mid + 1, y);
    }
    if (cnt[node])seg[node] = y - x + 1;
    else {
        if (x == y)seg[node] = 0;
        else seg[node] = seg[node * 2] + seg[node * 2 + 1];
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        a+=50000;
        b+=50000;
        c+=50000;
        d+=50000;
        arr[i] = { a,b,d - 1,1 };
        arr[i + n] = { c,b,d - 1,-1 };
    }
    sort(arr, arr + 2 * n, cmp);
    for (int i = 0; i < 2 * n; i++) {
        if (i) {
            int dx = arr[i].x - last;
            res += 1LL*dx*seg[1];
        }
        update(arr[i].y1, arr[i].y2, arr[i].z, 1, 0, MAX_Y);
        last = arr[i].x;
    }
    printf("%lld\n", res);
    return 0;
}
