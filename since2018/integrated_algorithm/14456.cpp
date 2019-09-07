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
	int a[4][4]={0};
	int i,j;
	int ans=0;
	for(i=0;i<n;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		a[q][w]++;
	}
	printf("%d",max(a[1][2]+a[2][3]+a[3][1],a[1][3]+a[3][2]+a[2][1]));
	
}
