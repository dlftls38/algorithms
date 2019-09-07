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
	int n;
	scanf("%d",&n);
	int i,j;
	priority_queue<pair<double,int>,vector<pair<double,int> >,greater<pair<double,int> > >pq;
	for(i=0;i<n;i++){
		double x,y,v;
		scanf("%lf%lf%lf",&x,&y,&v);
		pq.push(make_pair(sqrt(x*x+y*y)/v,i+1));
	}
	int size=pq.size();
	for(i=0;i<size;i++){
		printf("%d\n",pq.top().second);
		pq.pop();
	}
}
