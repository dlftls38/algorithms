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
using namespace std;
int main(){
	double h,l;
	scanf("%lf%lf",&h,&l);
	printf("%.20f",(l*l-h*h)/2/h);
}
