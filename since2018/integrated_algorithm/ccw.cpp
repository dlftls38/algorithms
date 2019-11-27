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
using namespace std;
int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
    int op = a.first*b.second + b.first*c.second + c.first*a.second;
    op -= (a.second*b.first + b.second*c.first + c.second*a.first);
    if (op > 0)return 1;
    else if (op == 0)return 0;
    else return -1;
}
int isIntersect(pair<pair<int, int>, pair<int, int>> x, pair<pair<int, int>, pair<int, int>> y) {
    pair<int, int> a = x.first;
    pair<int, int> b = x.second;
    pair<int, int> c = y.first;
    pair<int, int> d = y.second;
    int ab = ccw(a, b, c)*ccw(a, b, d);
    int cd = ccw(c, d, a)*ccw(c, d, b);
    if (ab == 0 && cd == 0) {
        if (a > b)swap(a, b);
        if (c > d)swap(c, d);
        return c <= b&&a <= d;
    }
    return ab <= 0 && cd <= 0;
}

int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x2,&y4);
	printf("%d",isIntersect({{x1,y1},{x2,y2}},{{x3,y3},{x4,y4}}));
	
}
