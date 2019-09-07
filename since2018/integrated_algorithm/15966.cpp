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
	scanf("%d",&n);
	int i;
	map<int,int>mp;
	int ans=0;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(mp[x]==0){
			mp[x]=1;
			ans=max(ans,mp[x]);
		}
		if(mp[x-1]+1>mp[x]){
			mp[x]=mp[x-1]+1;
			ans=max(ans,mp[x]);
		}
	}
	printf("%d",ans);
}
