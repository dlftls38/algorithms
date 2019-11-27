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
long long a[200000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	long long max_val=0;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		max_val=max(max_val,a[i]);
	}
	long long ggccdd=max_val-a[0];
	long long ans=0;
	for(i=1;i<n;i++){
		ggccdd=__gcd(ggccdd,max_val-a[i]);
	}
	for(i=0;i<n;i++){
		ans+=(max_val-a[i]);
	}
	printf("%lld %lld",ans/ggccdd,ggccdd);
}
