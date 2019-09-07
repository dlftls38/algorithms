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
	int ans=0;
	int i,j;
	scanf("%d",&n);
	int x[21]={0};
	int y[21]={0};
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	x[i]=x[0];
	y[i]=y[0];
	for(i=0;i<n;i++){
		ans+=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
	}
	printf("%d",ans);
}
