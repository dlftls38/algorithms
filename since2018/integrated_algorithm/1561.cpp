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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int a[10001];
	for(i=1;i<=m;i++){
		scanf("%d",&a[i]);
	}
	long long l=0;
	long long r=1LL*n*31;
	while(l<=r){
		long long mid=(l+r)/2;
		int empty=0;
		long long cnt=0;
		for(i=1;i<=m;i++){
			cnt+=mid/a[i];
			if(mid%a[i]==0){
				empty++;
			}
			else{
				cnt++;
			}
		}
		if(cnt<n && cnt+empty>=n){
			empty=0;
			for(i=1;i<=m;i++){
				if(mid%a[i]==0){
					empty++;
				}
				if(cnt+empty==n){
					printf("%d",i);
					return 0;
				}
			}
		}
		if(cnt>=n){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
}
