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
int a[500000];
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}