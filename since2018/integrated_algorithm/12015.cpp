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
#define INF 100000000
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	vector<int>vt;
	vt.push_back(-INF);
	int ans=0;
	for (int i = 0; i < n; i++) {
		int x;
	    scanf("%d", &x);
	    if (vt.back() < x) {
	        vt.push_back(x);
	           ans++;
	    }
	    else {
	        auto it = lower_bound(vt.begin(), vt.end(), x);
	        *it = x;
	    }
	}
	printf("%d",ans);

}
