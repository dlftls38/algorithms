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
	priority_queue<double>pq;
	double max_val=0;
	double min_val=20000000000;
	for(i=0;i<n;i++){
		double x;
		scanf("%lf",&x);
		max_val=max(max_val,x);
		min_val=min(min_val,x);
		pq.push(x);
	}
	double gap=max_val-min_val;
	int m;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		double x=pq.top();
		pq.pop();
		max_val=pq.top();
		min_val=min(min_val,x/2);
		gap=min(max_val-min_val,gap);
		double y=pq.top();
		pq.push(x/2);
		pq.push(x/2);
		max_val=pq.top();
		min_val=min(min_val,x/2);
		gap=min(max_val-min_val,gap);
		printf("%f %f %f\n",max_val,min_val,gap);
	}
	printf("%.11f",gap);
}
