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
	int a,b,x,y;
	scanf("%d%d%d%d",&a,&b,&x,&y);
	int ans=10000;
	ans=min(ans,abs(a-b));
	ans=min(ans,abs(x-a)+abs(y-b));
	ans=min(ans,abs(y-a)+abs(x-b));
	printf("%d",ans);
}