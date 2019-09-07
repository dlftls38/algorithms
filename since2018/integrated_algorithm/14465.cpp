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
int a[100001];
int main(){
	int n,k,b;
	int i,j;
	scanf("%d%d%d",&n,&k,&b);
	for(i=0;i<b;i++){
		int broken;
		scanf("%d",&broken);
		a[broken]=1;
	}
	int cnt=0;
	for(i=1;i<=k;i++){
		cnt+=a[i];
	}
	int ans=cnt;
	for(i=i;i<=n;i++){
		cnt+=a[i];
		cnt-=a[i-k];
		ans=min(ans,cnt);
	}
	printf("%d",ans);
}
