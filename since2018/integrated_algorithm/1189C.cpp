#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	vector<int>v;
	v.push_back(0);
	for(i=1;i<=n;i++){
		int x;
		scanf("%d",&x);
		v.push_back(x);
		v[i]+=v[i-1];
	}
	int q;
	scanf("%d",&q);
	for(i=0;i<q;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		printf("%d\n",(v[y]-v[x-1])/10);
	}
}
