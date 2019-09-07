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
#define pi 3.141592
using namespace std;
int n;
vector<int> tree[100001];
int sum(int i,int find) {
    int ans = 0;
    while (i > 0) {
        ans += tree[i].end()-upper_bound(tree[i].begin(),tree[i].end(),find);
        i -= (i & -i);
    }
    return ans;
}
void update(int i, int diff) {
    while (i < n+1) {
        tree[i].push_back(diff);
        i += (i & -i);
    }
}
int main() {
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
    	int x;
        scanf("%d",&x);
        update(i, x);
    }
    for (int i=1; i<=n; i++) {
    	sort(tree[i].begin(),tree[i].end());
    }
    int m;
    scanf("%d",&m);
    while (m--) {
    	int i,j,k;
    	scanf("%d%d%d",&i,&j,&k);
    	printf("%d\n",sum(j,k)-sum(i-1,k));
    }
    return 0;
}
