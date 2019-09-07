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
	int i;
	int q=INT_MAX;
	int qq=0;
	int w=INT_MAX;
	int ww=0;
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		q=min(q,a);
		qq=max(qq,a);
		w=min(w,b);
		ww=max(ww,b);
	}
	printf("%d",max(qq-q,ww-w)*max(qq-q,ww-w));
}
