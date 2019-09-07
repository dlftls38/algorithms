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
using namespace std;
typedef pair<int,int> pii;
int a[100001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		a[i]+=a[i-1];
	}
	for(i=0;i<m;i++){
		int s,e;
		scanf("%d%d",&s,&e);
		printf("%d\n",a[e]-a[s-1]);
	}
}
