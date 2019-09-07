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
	int c,n;
	scanf("%d%d",&c,&n);
	int i,j;
	vector<int>chicken;
	for(i=0;i<c;i++){
		int t;
		scanf("%d",&t);
		chicken.push_back(t);
	}
	sort(chicken.begin(),chicken.end());
	vector<pair<int,int> >cow;
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		cow.push_back({b,a});
	}
	sort(cow.begin(),cow.end());
	int ans=0;
	for(auto it : cow){
		auto it2 = lower_bound(chicken.begin(),chicken.end(),it.second);
		if(it2!=chicken.end() && *it2<=it.first){
			ans++;
			chicken.erase(it2);
		}
	}
	printf("%d",ans);
}
