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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	long long ans=9;
	long long cur=3;
	long long mul=1;
	for(int i=0;i<n-1;i++){
		cur+=pow(2,mul);
		mul++;
		ans=cur*cur;
	}
	printf("%lld",ans);
}
