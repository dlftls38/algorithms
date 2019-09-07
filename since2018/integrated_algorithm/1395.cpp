#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;
// a: 배열 a
// tree: 세그먼트 트리
// node: 세그먼트 트리 노드 번호
// node가 담당하는 합의 범위가 start ~ end
long long init(vector<long long> &a, vector<long long> &tree, int node, int start, int end) {
    if (start == end) {
        return tree[node] = a[start];
    } else {
        return tree[node] = init(a, tree, node*2, start, (start+end)/2) + init(a, tree, node*2+1, (start+end)/2+1, end);
    }
}
void update_lazy(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end) {
    if (lazy[node] != 0) {
        tree[node] = (end-start+1)-tree[node];
        // leaf가 아니면
        if (start != end) {
            lazy[node*2] = (lazy[node]+lazy[node*2])%2;
            lazy[node*2+1] = (lazy[node]+lazy[node*2+1])%2;
        }
        lazy[node] = 0;
    }
}
void update_range(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end, int left, int right) {
    update_lazy(tree, lazy, node, start, end);
    if (left > end || right < start) {
        return;
    }
    if (left <= start && end <= right) {
        tree[node] = (end-start+1)-tree[node];
        if (start != end) {
            lazy[node*2] = (lazy[node*2]+1)%2;
            lazy[node*2+1] = (lazy[node*2+1]+1)%2;
        }
        return;
    }
    update_range(tree, lazy, node*2, start, (start+end)/2, left, right);
    update_range(tree, lazy, node*2+1, (start+end)/2+1, end, left, right);
    tree[node] = tree[node*2] + tree[node*2+1];
}
long long sum(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end, int left, int right) {
    update_lazy(tree, lazy, node, start, end);
    if (left > end || right < start) {
        return 0;
    }
    if (left <= start && end <= right) {
        return tree[node];
    }
    return sum(tree, lazy, node*2, start, (start+end)/2, left, right) + sum(tree, lazy, node*2+1, (start+end)/2+1, end, left, right);
}
int main() {
    int n, m;
    scanf("%d%d",&n,&m);
    vector<long long> a(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    vector<long long> tree(tree_size);
    vector<long long> lazy(tree_size);
    for (int i=0; i<n; i++) {
        a[i]=0;
    }
    init(a, tree, 1, 0, n-1);
    while (m--) {
        int t1,start,end;
        scanf("%d%d%d",&t1,&start,&end);
        if (t1 == 0) {
            update_range(tree, lazy, 1, 0, n-1, start-1, end-1);
        } else if (t1 == 1) {
            printf("%lld\n",sum(tree, lazy, 1, 0, n-1, start-1, end-1));
        }
    }
}
