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
int a[300001];
int main(){
	int n,k,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	vector <long long>v;
	long long ans=0;
	for(i=n-1;i>=0;i--){
		ans+=a[i];
		if(i>0)
			v.push_back(ans);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(i=0;i<k-1;i++){
		ans+=v[i];
	}
	printf("%lld",ans);
}
