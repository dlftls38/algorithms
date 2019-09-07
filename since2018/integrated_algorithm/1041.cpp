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
	long long n;
	long long a[6]={0};
	int i;
	scanf("%lld",&n);
	for(i=0;i<6;i++){
		scanf("%lld",&a[i]);
	}
	long long ans=LONG_LONG_MAX;
	ans=min(ans,n*n*(a[0]*2+a[1]*2+a[3]));
	ans=min(ans,n*n*(a[1]*2+a[3]*2+a[0]));
	ans=min(ans,n*n*(a[3]*2+a[0]*2+a[1]));
	
	ans=min(ans,n*n*(a[0]*2+a[1]*2+a[2]));
	ans=min(ans,n*n*(a[1]*2+a[2]*2+a[0]));
	ans=min(ans,n*n*(a[2]*2+a[0]*2+a[1]));
	printf("%d %d %d\n",a[0]*2,a[1]*2,a[2]);
	ans=min(ans,n*n*(a[0]*2+a[3]*2+a[4]));
	ans=min(ans,n*n*(a[3]*2+a[4]*2+a[0]));
	ans=min(ans,n*n*(a[4]*2+a[0]*2+a[3]));
	
	ans=min(ans,n*n*(a[0]*2+a[4]*2+a[2]));
	ans=min(ans,n*n*(a[4]*2+a[2]*2+a[0]));
	ans=min(ans,n*n*(a[2]*2+a[0]*2+a[4]));
	
	ans=min(ans,n*n*(a[1]*2+a[3]*2+a[5]));
	ans=min(ans,n*n*(a[3]*2+a[5]*2+a[1]));
	ans=min(ans,n*n*(a[5]*2+a[1]*2+a[3]));
	
	ans=min(ans,n*n*(a[1]*2+a[2]*2+a[5]));
	ans=min(ans,n*n*(a[2]*2+a[5]*2+a[1]));
	ans=min(ans,n*n*(a[5]*2+a[1]*2+a[2]));
	
	ans=min(ans,n*n*(a[3]*2+a[4]*2+a[5]));
	ans=min(ans,n*n*(a[4]*2+a[5]*2+a[3]));
	ans=min(ans,n*n*(a[5]*2+a[3]*2+a[4]));
	
	ans=min(ans,n*n*(a[2]*2+a[4]*2+a[5]));
	ans=min(ans,n*n*(a[4]*2+a[5]*2+a[2]));
	ans=min(ans,n*n*(a[5]*2+a[2]*2+a[4]));
	
	printf("%lld",ans);
}
