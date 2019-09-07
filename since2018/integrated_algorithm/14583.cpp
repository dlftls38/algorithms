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
	double h,v;
	scanf("%lf%lf",&h,&v);
	double d=sqrt(h*h+v*v);
	double a=v*h/(h+d);
	double b=v*d/(h+d);
	double c=sqrt(a*a+h*h);
	printf("%.2f %.2f",c/2,(b*h)/c);
}
