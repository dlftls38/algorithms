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
int a[1000];
int main(){
	int n;
	double w,h;
	scanf("%d%lf%lf",&n,&w,&h);
	int i,j;
	for(i=0;i<n;i++){
		double temp;
		scanf("%lf",&temp);
		if(temp<=sqrt(w*w+h*h)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
