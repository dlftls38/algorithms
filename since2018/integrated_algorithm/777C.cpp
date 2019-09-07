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
vector <int>v[100001];
vector <int>vv[100001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			int x;
			scanf("%d",&x);
			vv[i].push_back(x);
		}
	}
	for(i=0;i<m;i++){
		v[i+1].push_back(0);
		for(j=0;j<n;j++){
			v[i+1].push_back(vv[j][i]);
		}
	}
	map<int,int>mp;
	for(i=1;i<=m;i++){
		int last=1;
		for(j=1;j<=n-1;j++){
			if(v[i][j]<=v[i][j+1]){
				mp[last]=max(mp[last],j+1);
			}
			else{
				last=j+1;
			}
		}
	}
	for(i=1;i<=n;i++){
		mp[i]=max(mp[i],i);
	}
	int mx=mp[1];
	for(i=2;i<=n;i++){
		if(mx>mp[i]){
			mp[i]=mx;
		}
		else{
			mx=mp[i];
		}
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		if(mp[l]>=r){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
}
