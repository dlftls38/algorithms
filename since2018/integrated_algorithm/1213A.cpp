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
	int n;
	scanf("%d",&n);
	int i,j;
	int a[100]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans=INF;
	for(i=0;i<n;i++){
		int cnt=0;
		for(j=0;j<n;j++){
			cnt+=(int)abs(a[i]-a[j])%2;
		}
		ans=min(ans,cnt);
	}
	printf("%d",ans);
}
