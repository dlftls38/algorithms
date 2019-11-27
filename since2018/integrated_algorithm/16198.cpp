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
vector<int>gs;
int n;
int ans;
void solve(int lefts,int sum){
	if(lefts==0){
		ans=max(ans,sum);
		return;
	}
	int i;
	int size=gs.size();
	for(i=1;i<size-1;i++){
		int val=gs[i];
		gs.erase(gs.begin()+i);
		solve(lefts-1,sum+gs[i-1]*gs[i]);
		gs.insert(gs.begin()+i,val);
	}
}
int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int w;
		scanf("%d",&w);
		gs.push_back(w);
	}
	solve(n-2,0);
	printf("%d",ans);
}
