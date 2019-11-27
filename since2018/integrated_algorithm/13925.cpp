#include <cstdio>
#include <cmath>
#include <vector>
#define MOD 1000000007
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
        tree[node] += (end-start+1)*lazy[node];
        // leaf가 아니면
        if (start != end) {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
}
void update_range(vector<long long> &tree, vector<long long> &lazy, int node, int start, int end, int left, int right, long long diff, long long mod) {
    update_lazy(tree, lazy, node, start, end);
    if (left > end || right < start) {
        return;
    }
    if (left <= start && end <= right) {
    	if(mod==1){
	        tree[node] = (tree[node]+(end-start+1)*diff)%MOD;
	        if (start != end) {
	            lazy[node*2] += diff;
	            lazy[node*2+1] += diff;
	        }	
		}
		else if(mod==2){
			tree[node] = (tree[node]*(end-start+1)*diff)%MOD;
	        if (start != end) {
	            lazy[node*2] += diff;
	            lazy[node*2+1] += diff;
	        }	
		}
		else if(mod==3){
			
		}
        return;
    }
    update_range(tree, lazy, node*2, start, (start+end)/2, left, right, diff, mod);
    update_range(tree, lazy, node*2+1, (start+end)/2+1, end, left, right, diff, mod);
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
    int n;
    scanf("%d",&n);
    vector<long long> a(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    vector<long long> tree(tree_size);
    vector<long long> lazy(tree_size);
    for (int i=0; i<n; i++) {
        scanf("%lld",&a[i]);
    }
    init(a, tree, 1, 0, n-1);
    int m;
    scanf("%d",&m);
    while (m--) {
        int t1;
        scanf("%d",&t1);
        if (t1 == 1) {
            int start, end;
            long long v;
            scanf("%d %d %lld",&start,&end, &v);
            update_range(tree, lazy, 1, 0, n-1, start-1, end-1, v, t1);
        } 
		else if (t1 == 2) {
            int start, end;
            long long v;
            scanf("%d %d %lld",&start,&end, &v);
            update_range(tree, lazy, 1, 0, n-1, start-1, end-1, v, t1);
        }
        else if (t1 == 3) {
            int start, end;
            long long v;	
            scanf("%d %d %lld",&start,&end, &v);
            update_range(tree, lazy, 1, 0, n-1, start-1, end-1, v, t1);
        }
        else if (t1 == 4) {
            int start, end;
            scanf("%d %d",&start,&end);
            printf("%lld\n",sum(tree, lazy, 1, 0, n-1, start-1, end-1));
        }
    }
    return 0;
}
