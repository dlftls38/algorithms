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
#define INF 2000000000
using namespace std;
pair<int,int>pr[1000000];
int main(){
	int n;
	scanf("%d",&n);
	vector<int>v;
	v.push_back(-INF);
	int ans=0;
	for (int i = 0; i < n; i++) {
		int x;
	    scanf("%d", &x);
	    if (v.back() < x) {
	        v.push_back(x);
	        ans++;
	        pr[i]=make_pair(ans,x);
	    }
	    else {
	        auto it = lower_bound(v.begin(), v.end(), x);
	        *it = x;
	        pr[i]=make_pair(it-v.begin(),x);
	    }
	}
	printf("%d\n",ans);
	stack<int>s;
	for(int i=n-1;i>=0;i--){
		if(pr[i].first==ans){
			s.push(pr[i].second);
			ans--;
		}
	}
	int size=s.size();
	for(int i=0;i<size;i++){
		printf("%d ",s.top());
		s.pop();
	}
}
