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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int s,k;
	scanf("%d%d",&s,&k);
	priority_queue<int,vector<int>,greater<int> >pq;
	int sum=0;
	int i,j;
	for(i=0;i<k;i++){
		pq.push(0);
	}
	while(sum<s){
		int temp=pq.top();
		pq.pop();
		pq.push(temp+1);
		sum++;
	}
	long long ans=1;
	for(i=0;i<k;i++){
		ans*=pq.top();
		pq.pop();
	}
	printf("%lld",ans);
}
