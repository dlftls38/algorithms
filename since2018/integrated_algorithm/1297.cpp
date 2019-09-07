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
	double s,h,w;
	scanf("%lf%lf%lf",&s,&h,&w);
	double p = s/sqrt(h*h+w*w);
	printf("%d %d",(int)floor(p*h),(int)floor(p*w));
}
