#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
using namespace std;

int n, q, u, v, arr[100001];
struct node {
    int ls, rs, lrs, mxs;
    node(int ls=-INF,int rs=-INF,int lrs=0,int mxs=-INF):ls(ls),rs(rs),lrs(lrs),mxs(mxs){}
} tree[400004];

node merge(const node &a, const node &b) {
    node ret;
    ret.ls = max(a.ls, a.lrs + b.ls);
    ret.rs = max(a.rs + b.lrs, b.rs);
    ret.lrs = a.lrs + b.lrs;
    ret.mxs = max({ a.mxs,b.mxs,a.rs+b.ls });
    return ret;
}

void update(int idx, int val, int now, int lft, int rgt) {
    if (idx < lft || rgt < idx) return;
    if (lft == rgt) {
        tree[now] = node(val, val, val, val);
        return;
    }
    update(idx, val, now * 2, lft, (lft + rgt) / 2);
    update(idx, val, now * 2 + 1, (lft + rgt) / 2 + 1, rgt);
    tree[now] = merge(tree[now * 2], tree[now * 2 + 1]);
}

node query(int now, int lft, int rgt, int x, int y) {
    if (rgt < x || y < lft) return node();
    if (x <= lft && rgt <= y) return tree[now];
    node r1 = query(now * 2, lft, (lft + rgt) / 2, x, y);
    node r2 = query(now * 2 + 1, (lft + rgt) / 2 + 1, rgt, x, y);
    return merge(r1, r2);
}

int main() {
    scanf("%d%d%d%d",&n,&q,&u,&v);
    for(int i=1;i<=n;i++) {
        scanf("%d", &arr[i]);
        update(i, u * arr[i] + v, 1, 1, n);
    }

    while (q--) {
        int c, a, b;
        scanf("%d %d %d", &c, &a, &b);
        if (c==0) {
            printf("%d\n", query(1, 1, n, a, b).mxs - v);
        }
        else{
            arr[a] = b;
            update(a, u * b + v, 1, 1, n);
        }
    }
}
