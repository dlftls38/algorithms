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
	int n;
	int i,j;
	scanf("%d",&n);
	vector<pair<int,int>>v;
	for(i=0;i<n;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		v.push_back({x,y});
	}
	sort(v.begin(),v.end());
	int ans=0;
	int s=v[0].first;
	int e=v[0].second;
	for(i=1;i<n;i++){
		if(v[i].first<=e){
			e=max(e,v[i].second);
		}
		else{
			ans+=e-s;
			s=v[i].first;
			e=v[i].second;
		}
	}
	ans+=e-s;
	printf("%d",ans);
}
