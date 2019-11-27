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
int a[1024][1024];
void dq(int y_s, int y_e, int x_s, int x_e){
	if(y_e-y_s==2){
		priority_queue<int>pq;
		pq.push(a[y_s][x_s]);
		pq.push(a[y_s][x_s+1]);
		pq.push(a[y_s+1][x_s]);
		pq.push(a[y_s+1][x_s+1]);
		pq.pop();
		a[y_s/2][x_s/2]=pq.top();
		return;
	}
	dq(y_s, (y_s+y_e)/2, x_s, (x_s+x_e)/2);
	dq(y_s, (y_s+y_e)/2, (x_s+x_e)/2, x_e);
	dq((y_s+y_e)/2, y_e, x_s, (x_s+x_e)/2);
	dq((y_s+y_e)/2, y_e, (x_s+x_e)/2, x_e);
}
int main(){
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	while(n>=2){
		dq(0, n, 0, n);
		n/=2;
	}
	printf("%d",a[0][0]);
}
