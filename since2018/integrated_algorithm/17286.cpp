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
double x[4],y[4];
int check[4];
double dist(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double solve(int cur,int cnt){
	if(cnt==3){
		return 0;
	}
	int i,j;
	double ans=INT_MAX;
	for(i=1;i<4;i++){
		if(check[i]==0){
			check[i]=1;
			ans = min(ans,solve(i,cnt+1)+dist(x[cur],y[cur],x[i],y[i]));
			check[i]=0;
		}
	}
	return ans;
}
int main(){
	int i,j;
	for(i=0;i<4;i++){
		scanf("%lf%lf",&x[i],&y[i]);
	}
	printf("%d",(int)solve(0,0));
}
