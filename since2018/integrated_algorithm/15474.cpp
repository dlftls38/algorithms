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
int a,b,c,d;
int main(){
	int n;
	scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
	int aa = n/a + (n%a>0?1:0);
	int cc = n/c + (n%c>0?1:0);
	printf("%d",min(aa*b,cc*d));
}
