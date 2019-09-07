#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <set>
#include <map>
#include <cstring>
#include <string>
using namespace std;
int tree[1111][1111];
int n, m;
 
int sum(int x, int y) {
    int ret = 0;
    for (int i = x; i > 0; i -= (i&-i)) {
        for (int j = y; j > 0; j -= (j&-j)) {
            ret += tree[i][j];
        }
    }
    return ret;
}
 
void update(int x, int y, int val) {
    for (int i = x; i <= n; i += (i&-i)) {
        for (int j = y; j <= n; j += (j&-j)) {
            tree[i][j] += val;
        }
    }
}
int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x; scanf(" %d", &x);
            update(i, j, x);
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b, x, y; scanf(" %d %d %d %d", &a, &b, &x, &y);
        printf("%d\n", sum(x, y)-sum(a-1,y) - sum(x,b-1) + sum(a-1,b-1));
    }
}

