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
int a[1000000];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=1;
	int r=2000000000;
	int ans=1;
	while(l<=r){
		int mid=(l+r)/2;
		long long cnt=0;
		for(i=0;i<n;i++){
			cnt+=((mid-a[i]>0)?mid-a[i]:0);
		}
		if(cnt<=k){
			ans=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	printf("%d",ans);
}
