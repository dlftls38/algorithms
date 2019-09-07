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
int n;
long long m;
int v[1001] = {0, 1}, c[1001], an[1001][1001];
int a[1001], t[1001], b[1001];
 
void kitamasa(long long p) {
    if (p <= n) {
        fill(a+1, a+n+1, 0);
        a[p] = 1;
        return;
    }
    if (p % 2 == 1) {
        kitamasa(p-1);
        int last = a[n];
        for (int i = n; i >= 1; i--)
            a[i] = (a[i-1] + c[i] * last) % 1999;
        return;
    }
    kitamasa(p/2);
    fill(t+1, t+n+1, 0);
    fill(b+1, b+n+1, 0);
    for (int j = 1; j <= n; j++)
        for (int k = j; k <= n; k++)
            b[j] = (b[j] + a[k] * a[j-k+n]) % 1999;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i-1; j++)
            t[i] = (t[i] + a[j] * a[i-j]) % 1999;
        for (int j = 1; j <= n; j++)
            t[i] = (t[i] + b[j] * an[j][i]) % 1999;
    }
    copy(t+1, t+n+1, a+1);
}
int main(){
	scanf("%d%lld",&n,&m);
	int i,j;
    for(i=2;i<=n;i++){
    	v[i]=(2*v[i-1])%1999;	
	}
    v[n]=(2*v[n]-1)%1999;
    fill(c+1, c+n+1, 1);
    for(i=1;i<n;i++){
    	c[1]=(2*c[1])%1999;	
	}
    copy(c+1, c+n+1, an[1]+1);
    for(j=2;j<=n;j++){
        for(i=1;i<=n;i++){
        	an[j][i]=(an[j][i]+an[j-1][i-1]+c[i]*an[j-1][n])%1999;
		}
	}
    kitamasa(m);
    int res=0;
    for(i=1;i<=n;i++){
    	res=(res +a[i]*v[i])%1999;	
	}
    printf("%d",res);
}
