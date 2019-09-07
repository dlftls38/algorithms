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
	int i,j;
	scanf("%d",&n);
	vector<int>v;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int ans=-INF;
	int size=v.size();
	ans=max(ans,v[size-1]*v[size-2]*v[size-3]);
	ans=max(ans,v[size-1]*v[size-2]);
	ans=max(ans,v[0]*v[1]);
	ans=max(ans,v[0]*v[1]*v[size-1]);
	printf("%d",ans);
}
