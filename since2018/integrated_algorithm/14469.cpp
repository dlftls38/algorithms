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
	int i,j;
	vector<pair<int,int> >v;
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		v.push_back({a,b});
	}
	sort(v.begin(),v.end());
	int cur=0;
	for(i=0;i<n;i++){
		cur=max(cur,v[i].first);
		cur+=v[i].second;
	}
	printf("%d",cur);
}
