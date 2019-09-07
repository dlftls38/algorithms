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
int a[1025][1025];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
			a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
		}
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int y1,x1,y2,x2;
		scanf("%d%d%d%d",&y1,&x1,&y2,&x2);
		printf("%d\n",a[y2][x2]-a[y2][x1-1]-a[y1-1][x2]+a[y1-1][x1-1]);
	}
}
