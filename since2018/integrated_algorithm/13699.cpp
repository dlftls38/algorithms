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
long long t[36];
long long solve(int n){
	if(n==0)return 1;
	long long &ret=t[n];
	if(ret!=0){
		return ret;
	}
	for(int i=0;i<n;i++){
		ret+=solve(i)*solve(n-i-1);
	}
	return ret;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",solve(n));
}
