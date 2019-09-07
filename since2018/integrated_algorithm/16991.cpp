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
using namespace std;
int n;
double w[16][16];
double cache[16][1<<16];
double x[16],y[16];
double tsp(int current, int visited){
	if(visited==(1<<n)-1)  return w[current][0]?w[current][0]:MAX_VALUE;
	double& ret = cache[current][visited];
	if(ret != 0) return ret;
	ret = MAX_VALUE;
	for(int next = 0; next<n;next++){
		if(visited&(1 << next))continue;
		if(w[current][next]==0)continue;
		ret = min(ret, tsp(next, visited | (1 << next)) + w[current][next]);
	}
	return ret;
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				w[i][j]=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
				w[j][i]=w[i][j];
			}
		}
	}
	printf("%f",tsp(0,1));
}
