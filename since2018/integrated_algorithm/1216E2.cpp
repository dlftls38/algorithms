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
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int d(long long v)
{
    if (v < 10) return 1;
    if (v < 100) return 2;
    if (v < 1000) return 3;
    if (v < 10000) return 4;
    if (v < 100000) return 5;
    if (v < 1000000) return 6;
    if (v < 10000000) return 7;
    if (v < 100000000) return 8;
    if (v < 1000000000) return 9;
    return 10;
}
 
int main()
{
    int q;
    cin >> q;
    while(q--){
        long long k;
        cin >> k;
        long long t = upper_bound(ca.begin(), ca.end(), k) - 1 - ca.begin();
        long long C = c[t], CA = ca[t];
        t *= B;
        while (1){
            t++;
            int l = d(t);
            if (CA + (C + l) >= k) break;
            C += l;
            CA += C;
        }
        lint n = k - CA;
        lint p = upper_bound(c.begin(), c.end(), n) - 1 - c.begin();
        lint ctmp = c[p];
        p *= B;
        while (true)
        {
            p++;
            int l = d(p);
            if (ctmp + l >= n) break;
            ctmp += l;
        }
        char ans = to_string(p).at(n - ctmp - 1);
        printf("%c\n", ans);
    }
}
