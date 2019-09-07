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
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	pair<int,int>a[6];
	for(i=0;i<n;i++){
		int s,y;
		scanf("%d%d",&s,&y);
		y--;
		if(s==0){
			a[y].first++;
		}
		else{
			a[y].second++;
		}
	}
	int ans=0;
	ans+=(a[0].first+a[0].second+a[1].first+a[1].second)/k;
	ans+=(a[0].first+a[0].second+a[1].first+a[1].second)%k>0?1:0;
	ans+=(a[2].first+a[3].first)/k;
	ans+=(a[2].first+a[3].first)%k>0?1:0;
	ans+=(a[2].second+a[3].second)/k;
	ans+=(a[2].second+a[3].second)%k>0?1:0;
	ans+=(a[4].first+a[5].first)/k;
	ans+=(a[4].first+a[5].first)%k>0?1:0;
	ans+=(a[4].second+a[5].second)/k;
	ans+=(a[4].second+a[5].second)%k>0?1:0;
	printf("%d",ans);
}
