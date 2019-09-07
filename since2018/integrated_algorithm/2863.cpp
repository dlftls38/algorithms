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
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	double ans=a/c+b/d;
	int cnt=0;
	for(int i=1;i<4;i++){
		double temp=a;
		a=c;
		c=d;
		d=b;
		b=temp;
		if(ans<a/c+b/d){
			ans=a/c+b/d;
			cnt=i;
		}
	}
	printf("%d",cnt);
}
