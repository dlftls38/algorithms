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
long long cnt[10];
void make9(long long n, long long k){
    while (n>0){
        cnt[n % 10] += k;
        n = n / 10;
    }
}
int main(){
	int i;
    long long n, head, k = 1;
    int d;
    scanf("%lld%d", &n,&d);
    while (1){
        while (n % 10 != 9 && n >= 0){
            make9(n, k);
            n--;
        }
        if (n <= 0){
            break;
        }
        head = n / 10;
        for (i = 0; i <= 9; i++){
            cnt[i] += ((head + 1) * k);
        }
        cnt[0] -= k;
        k *= 10;
        n = head;
    }
    printf("%lld",cnt[d]);
}
