#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional> 
#include <limits.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	vector <int>v;
	v.push_back(-INT_MAX);
	int ans=0;
	int i,j;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(v.back()<x){
			ans++;
			v.push_back(x);
		}
		else{
			auto it = lower_bound(v.begin(),v.end(),x);
			*it=x;
		}
	}
	printf("%d",n-ans);
}
