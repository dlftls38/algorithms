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
double dist(double x1,double y1, double x2, double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double another_dist(double x1,double y1, double x2, double y2,double x3,double y3){
    double area = abs ( (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1) );
    double AB = dist(x2,y2,x3,y3);
    return ( area / AB );
}
int main(){
	while(1){
		double x1,y1,x2,y2,x3,y3;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		if(x1==0 && y1==0 && x2==0 &&y2==0 &&x3==0 &&y3==0){
			break;
		}
		double a = dist(x1,y1,x2,y2);
		double b = dist(x2,y2,x3,y3);
		double c = dist(x3,y3,x1,y1);
		double center_x = (b*x1+c*x2+a*x3)/(a+b+c);
		double center_y = (b*y1+c*y2+a*y3)/(a+b+c);
		double s = (a+b+c)/2;
		double r = sqrt(s*(s-a)*(s-b)*(s-c))/s;
		double d = dist(center_x,center_y,x3,y3);
		double e = dist(center_x,center_y,x1,y1);
		double f = dist(center_x,center_y,x2,y2);
		double r1 = r * (s+d-r-e-f)/(2*(s-a));
		double r2 = r * (s+e-r-d-f)/(2*(s-b));
		double r3 = r * (s+f-r-d-e)/(2*(s-c));
		printf("%.6f %.6f %.6f\n",r2,r3,r1);
	}
}
