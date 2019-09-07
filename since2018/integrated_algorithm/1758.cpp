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
	long long ans=0;
	priority_queue<int>pq;
	for(i=1;i<=n;i++){
		int temp;
		scanf("%d",&temp);
		pq.push(temp);
	}
	for(i=1;i<=n;i++){
		ans+=pq.top()-i+1>0?pq.top()-i+1:0;
		pq.pop();
	}
	printf("%lld",ans);
}
