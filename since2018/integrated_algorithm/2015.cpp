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
int psum[200000];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		psum[i]=x;
		if(i>0){
			psum[i]+=psum[i-1];
		}
	}
	map<int,int>m;
	long long ans=0;
	for(i=0;i<n;i++){
		if(psum[i]==k){
			ans++;
		}
		ans+=m[psum[i]-k];
		m[psum[i]]++;
	}
	printf("%lld",ans);
}
