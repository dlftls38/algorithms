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
int a[200000];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	map<int,int>mp;
	map<int,int>cnt;
	int ans=999999999;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		mp[a[i]]++;
		if(mp[a[i]]>=k)ans=0;
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		int temp=0;
		while(a[i]>0){
			a[i]/=2;
			temp++;
			mp[a[i]]++;
			cnt[a[i]]+=temp;
			if(mp[a[i]]>=k){
				ans=min(ans,cnt[a[i]]);
			}
		}
	}
	printf("%d",ans);
}
