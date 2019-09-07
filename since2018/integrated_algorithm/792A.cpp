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
using namespace std;
int a[200000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int ans=INT_MAX;
	int cnt=0;
	for(i=1;i<n;i++){
		if(a[i]-a[i-1]==ans){
			cnt++;
		}
		else if(a[i]-a[i-1]<ans){
			cnt=1;
			ans=a[i]-a[i-1];
		}
	}
	printf("%d %d",ans,cnt);
}
