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
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int start_val=a[0];
	int end_val=a[n-1];
	sort(a,a+n);
	int start_pos;
	int end_pos;
	for(i=0;i<n;i++){
		if(a[i]==start_val){
			start_pos=i;
		}
		if(a[i]==end_val){
			end_pos=i;
		}
	}
	long long ans=0;
	for(i=start_pos;i<end_pos;i++){
		ans+=1LL*(a[i+1]-a[i])*(a[i+1]-a[i]);
	}
	printf("%lld",ans);
}
