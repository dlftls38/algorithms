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
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[15]={0};
	int i,j;
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	long long ans=n;
	for(i=1;i<(1<<k);i++){
		int cnt=0;
		long long val=1;
		for(j=0;j<k;j++){
			if(i&(1<<j)){
				val=val*a[j]/__gcd(val,1LL*a[j]);
				cnt++;
			}
		}
		if(cnt%2==1){
			ans-=n/val;
		}
		else{
			ans+=n/val;
		}
	}
	printf("%lld",ans);
}
