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
	int p;
	scanf("%d",&p);
	int i,j;
	for(i=1;i<=p;i++){
		int n;
		double d,a,b,f;
		scanf("%d%lf%lf%lf%lf",&n,&d,&a,&b,&f);
		printf("%d %f\n",n,d/(a+b)*f);
	}
}
