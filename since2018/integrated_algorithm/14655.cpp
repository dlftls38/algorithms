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
	vector<int>a;
	vector<int>b;
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		a.push_back(abs(x));
	}
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		b.push_back(x>0?-x:x);
	}
	int ans=0;
	for(i=0;i<n;i++){
		ans+=a[i]-b[i];
	}
	printf("%d",ans);
}
