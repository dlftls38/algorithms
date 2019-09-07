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
int input[100001];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&input[i]);
		input[i]+=input[i-1];
	}
	long long ans=0;
	for(i=1;i<n;i++){
		ans+=1LL*(input[i]-input[i-1])*(input[n]-input[i]);
	}
	printf("%lld",ans);
}
