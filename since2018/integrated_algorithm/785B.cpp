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
	int n,m;
	scanf("%d",&n);
	int i,j;
	int ans1=INT_MAX;
	int ans2=0;
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		ans1=min(ans1,w);
		ans2=max(ans2,q);
	}
	int res1=INT_MAX;
	int res2=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		res1=min(res1,w);
		res2=max(res2,q);
	}
	printf("%d",max(ans2-res1,max(0,res2-ans1)));
}
