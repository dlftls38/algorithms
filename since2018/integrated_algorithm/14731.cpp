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
#define MOD 1000000007
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int pow(int a, int b) {
    if (b == 0) {
        return 1;
    }
 
    int n = pow(a, b / 2);
    int temp = 1LL * n * n % MOD;
 
    if (b % 2 == 0) {
        return temp;
    } else {
        return 1LL * a * temp %MOD;
    }
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int ans=0;
	for(i=0;i<n;i++){
		int c,k;
		scanf("%d%d",&c,&k);
		c = 1LL * c * k % MOD;
		k--;
		c = 1LL * c * pow(2,k) % MOD;
		ans = ( ans + c ) % MOD;
	}
	printf("%d",ans);
}
