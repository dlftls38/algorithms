#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
using namespace std;
int main(){
	double q,w,c;
	scanf("%lf%lf%lf",&q,&w,&c);
	int i,j;
	double l=max(q,w)+1;
	double r=pow(10,18);
	double mid;
	while(l<=r){
		mid=(l+r)/2;
		if(abs(mid*c/sqrt(w*w-mid*mid)-mid*c/sqrt(mid*mid-q*q)+mid<=0.001)){
			printf("%f",mid);
			return 0;
		}
		else{
			
		}
	}
}
