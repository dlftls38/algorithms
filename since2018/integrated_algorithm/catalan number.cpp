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
typedef pair<int,int> pii;
int main(){
	int n;
	int c[5001]={1};
    scanf("%d", &n);
    int i,j;
    for (i=1; i <= n/2; i++)
        for (j=0; j<i; j++){
        	c[i] = (c[i] + 1LL * c[j] * c[i - 1 - j]) % 987654321;	
		}
    printf("%d", n & 1 ? 0 : c[n / 2]);
}
