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
	int n,q;
	scanf("%d%d",&n,&q);
	int i,j;
	int a[1000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<q;i++){
		int a1,a2;
		scanf("%d%d",&a1,&a2);
		int sum=0;
		for(j=a1;j<a2;j++){
			sum+=abs(a[j]-a[j-1]);
		}
		printf("%d\n",sum);
	}
}
