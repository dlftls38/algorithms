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
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	int n,m;
	cin>>n>>m;
	int c1,c2;
	cin>>c1>>c2;
	vector<int>p;
	vector<int>q;
	int i,j;
	int x;
	for(i=0;i<n;i++){
		cin>>x;
		p.push_back(x);
	}
	sort(p.begin(),p.end());
	for(i=0;i<m;i++){
		cin>>x;
		q.push_back(x);
	}
	sort(q.begin(),q.end());
	int min_val=INT_MAX;
	for(i=0;i<n;i++){
		auto it = lower_bound(q.begin(),q.end(),p[i]);
		if(it!=q.end()){
			min_val=min(min_val,abs(*it-p[i]));	
		}
	}
	for(i=0;i<m;i++){
		auto it = lower_bound(p.begin(),p.end(),q[i]);
		if(it!=p.end()){
			min_val=min(min_val,abs(*it-q[i]));	
		}
	}
	int cnt=0;
	for(i=0;i<n;i++){
		auto it = lower_bound(q.begin(),q.end(),p[i]);
		if(it!=q.end() && min_val==abs(*it-p[i])){
			cnt++;
		}
	}
	for(i=0;i<m;i++){
		auto it = lower_bound(p.begin(),p.end(),q[i]);
		if(it!=p.end() && min_val==abs(*it-q[i]) && min_val>0){
			cnt++;
		}
	}
	printf("%d %d",min_val+abs(c1-c2),cnt);
}
