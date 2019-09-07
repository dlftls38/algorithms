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
using namespace std;
vector<pair<int,int> >v;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		v.push_back(make_pair(w,q));
	}
	sort(v.begin(),v.end());
	int now=0;
	int ans=0;
	for(i=0;i<n;i++){
		if(v[i].second>=now){
			ans++;
			now=v[i].first;
		}
	}
	printf("%d",ans);
}
