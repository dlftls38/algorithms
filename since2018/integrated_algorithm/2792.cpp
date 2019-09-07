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
#include <math.h>
using namespace std;
int a[300000];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	int l=1;
	int r=pow(10,9);
	int mid;
	int ans;
	while(l<=r){
		mid=(l+r)/2;
		int count=0;
		for(i=0;i<m;i++){
			count+=a[i]/mid+(a[i]%mid?1:0);
		}
		if(count<=n){
			ans=mid;
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	printf("%d",ans);
}
