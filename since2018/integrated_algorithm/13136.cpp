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
	int r,c,n;
	scanf("%d%d%d",&r,&c,&n);
	long long ans=1LL*(r/n+(r%n>0?1:0))*(c/n+(c%n>0?1:0));
	printf("%lld",ans);
}
