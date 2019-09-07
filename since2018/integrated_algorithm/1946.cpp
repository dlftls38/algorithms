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
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j;
		vector<pair<int,int> >v;
		for(i=0;i<n;i++){
			int s,e;
			scanf("%d%d",&s,&e);
			v.push_back(make_pair(s,e));
		}
		sort(v.begin(),v.end());
		int count=1;
		int best=v[0].second;
		for(i=1;i<n;i++){
			if(v[i].second<best){
				best=v[i].second;
				count++;
			}
		}
		printf("%d\n",count);
	}
}
