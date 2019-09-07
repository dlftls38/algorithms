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
		int n;
		scanf("%d",&n);
		int a=n/3;
		int b=n/7;
		int c=n/21;
		long long ans1=1LL*3*a*(a+1)/2;
		long long ans2=1LL*7*b*(b+1)/2;
		long long ans3=1LL*21*c*(c+1)/2;
		printf("%lld\n",ans1+ans2-ans3);
	}
}
