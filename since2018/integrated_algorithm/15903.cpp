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
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	priority_queue<long long,vector<long long>,greater<long long> >pq;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		pq.push(x);
	}
	for(i=0;i<m;i++){
		long long t1=pq.top();
		pq.pop();
		long long t2=pq.top();
		pq.pop();
		pq.push(t1+t2);
		pq.push(t1+t2);
	}
	long long ans=0;
	for(i=0;i<n;i++){
		ans+=pq.top();
		pq.pop();
	}
	printf("%lld",ans);
}
