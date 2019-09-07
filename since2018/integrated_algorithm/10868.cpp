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
using namespace std;
long long init(vector<long long> &a, vector<long long> &tree, int node, int start, int end) {
    if (start == end) {
        return tree[node] = a[start];
    } else {
        return tree[node] = min(init(a, tree, node*2, start, (start+end)/2), init(a, tree, node*2+1, (start+end)/2+1, end));
    }
}
long long find(vector<long long> &tree, int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return LONG_LONG_MAX;
    }
    if (left <= start && end <= right) {
        return tree[node];
    }
    return min(find(tree, node*2, start, (start+end)/2, left, right),find(tree, node*2+1, (start+end)/2+1, end, left, right));
}
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    vector<long long> a(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    vector<long long> tree(tree_size);
    for (int i=0; i<n; i++) {
        scanf("%lld",&a[i]);
    }
    init(a, tree, 1, 0, n-1);
    while (m--) {
        int t1,t2;
        scanf("%d%d",&t1,&t2);
        printf("%lld\n",find(tree,1,0,n-1,t1-1,t2-1));
    }
    return 0;
}
