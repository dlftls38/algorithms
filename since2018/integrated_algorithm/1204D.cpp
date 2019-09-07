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
int a[100000];
int ans[100000];
int origin[100000];
int main(){
	string s;
	cin>>s;
	int i,j;
	int len=s.length();
	for(i=0;i<len;i++){
		origin[i]=s[i]-48;
	}
	for(i=len-1;i>=0;i--){
		vector<int>vt;
		vt.push_back(-INF);
		int cnt=0;
		for (j = i; j < len; j++) {
			int x=origin[j];
		    if (vt.back() <= x) {
		        vt.push_back(x);
		           cnt++;
		    }
		    else {
		        auto it = lower_bound(vt.begin(), vt.end(), x);
		        *it = x;
		    }
		}
		a[i]=cnt;
	}
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
}
