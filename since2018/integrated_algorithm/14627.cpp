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
	int s,c;
	scanf("%d%d",&s,&c);
	int i,j;
	long long sum=0;
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int l=0;
	int r=sum/c;
	int mid=(l+r)/2;
	long long ans;
	while(l<=r){
		mid=(l+r)/2;
		int cnt=0;
		for(i=0;i<s;i++){
			if(mid!=0)
				cnt+=a[i]/mid;
		}
		if(mid==0)cnt=c;
		if(cnt>=c){
			l=mid+1;
			ans=sum-1LL*mid*c;
		}
		else{
			r=mid-1;
		}
	}
	printf("%lld",ans);
}
