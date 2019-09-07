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
pair<long long,long long> init(vector<long long> &a, vector<pair<long long,long long> > &tree, int node, int start, int end) {
    if (start == end) {
    	tree[node].first = a[start];
    	tree[node].second = a[start];
        return tree[node];
    } else {
    	auto temp1=init(a, tree, node*2, start, (start+end)/2);
    	auto temp2=init(a, tree, node*2+1, (start+end)/2+1, end);
    	tree[node].first=min(temp1.first,temp2.first);
    	tree[node].second=max(temp1.second,temp2.second);
        return tree[node];
    }
}
pair<long long,long long> find(vector<pair<long long,long long> > &tree, int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return {LONG_LONG_MAX,0};
    }
    if (left <= start && end <= right) {
        return tree[node];
    }
	auto temp1=find(tree, node*2, start, (start+end)/2, left, right);
	auto temp2=find(tree, node*2+1, (start+end)/2+1, end, left, right);
	return {min(temp1.first,temp2.first),max(temp1.second,temp2.second)};
}
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    vector<long long> a(n);
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    vector<pair<long long,long long> > tree(tree_size);
    for (int i=0; i<n; i++) {
        scanf("%lld",&a[i]);
    }
    init(a, tree, 1, 0, n-1);
    while (m--) {
        int t1,t2;
        scanf("%d%d",&t1,&t2);
        auto temp=find(tree,1,0,n-1,t1-1,t2-1);
        printf("%lld %lld\n",temp.first,temp.second);
    }
    return 0;
}
