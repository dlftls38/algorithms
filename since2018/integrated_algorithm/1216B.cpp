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
	int n;
	scanf("%d",&n);
	pair<int,int> a[1001];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i].first);
		a[i].second=i+1;
	}
	sort(a,a+n);
	reverse(a,a+n);
	int ans[1001];
	int val=0;
	for(i=0;i<n;i++){
		val+=a[i].first*i+1;
		ans[i]=a[i].second;
	}
	printf("%d\n",val);
	for(i=0;i<n;i++){
		printf("%d ",ans[i]);
	}
}
