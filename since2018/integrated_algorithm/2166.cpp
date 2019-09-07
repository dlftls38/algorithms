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
	vector<double>x;
	vector<double>y;
	for(i=0;i<n;i++){
		double tx,ty;
		scanf("%lf%lf",&tx,&ty);
		x.push_back(tx);
		y.push_back(ty);
	}
	x.push_back(x[0]);
	y.push_back(y[0]);
	double ans=0;
	for(i=0;i<n;i++){
		ans+=(x[i]*y[i+1]-x[i+1]*y[i])/2;
	}
	printf("%.1f",fabs(ans));
}
