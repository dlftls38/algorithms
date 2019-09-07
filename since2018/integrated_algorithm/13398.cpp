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
int a[100000];
int d[100000][2];
int main() {
	int i;
    int n;
    scanf("%d",&n);
    for(i = 0; i < n; i++) {
    	scanf("%d",&a[i]);
    }
    int ans = a[0];
    for (i = 0; i < n; i++) {
        d[i][0] = d[i][1] = a[i];
        if (i == 0) continue;
        d[i][0] = max(d[i - 1][0] + a[i], a[i]);
        d[i][1] = max(d[i - 1][0], d[i - 1][1] + a[i]);
        ans = max(ans,max(d[i][0], d[i][1]));
    }
    printf("%d",ans);
}
