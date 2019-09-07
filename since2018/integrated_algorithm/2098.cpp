#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#define MAX_VALUE 100000000
using namespace std;
int n;
int w[16][16];
int cache[16][65536];
int tsp(int current, int visited){
	if(visited==(1<<n)-1)  return w[current][0]?w[current][0]:MAX_VALUE;

	int& ret = cache[current][visited];
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
		for(j=0;j<n;j++){
			scanf("%d",&w[i][j]);
		}
	}
	printf("%d",tsp(0,1));
}
