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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	double a[50]={0};
	int b[50]={0};
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++){
		double cur=INT_MIN;
		int cnt=0;
		for(j=i+1;j<n;j++){
			if(cur<(a[i]-a[j])/(i-j)){
				cur=(a[i]-a[j])/(i-j);
				b[j]++;
				b[i]++;
			}
		}
	}
	printf("%d",*max_element(b,b+n));
}
