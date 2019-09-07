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
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		long long a[3];
		int i;
		scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
		sort(a,a+3);
		printf("%lld\n",(a[0]+a[1])*(a[0]+a[1])+a[2]*a[2]);
	}
}
