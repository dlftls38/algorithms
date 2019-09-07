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
	vector<int>v;
	int i,j;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
	long long ans=0;
	for(i=0;i<n;i++){
		long long temp=1;
		for(j=0;j<v[i]%10;j++){
			temp*=1LL*(v[i]/10);	
		}
		ans+=temp;
	}
	printf("%lld",ans);
}
