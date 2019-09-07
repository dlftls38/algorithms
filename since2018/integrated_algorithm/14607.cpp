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
map<int,long long>mp;
long long solve(int n){
	if(n==1){
		return 0;
	}
	long long &res = mp[n];
	if(res!=0){
		return res;
	};
	if(n%2==1){
		return res=1LL*n/2*(n/2+1)+solve(n/2)+solve(n/2+1);
	}
	else{
		return res=1LL*n/2*n/2+solve(n/2)+solve(n/2);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",solve(n));
}
