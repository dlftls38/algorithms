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
int main(){
	int n,mood;
	scanf("%d%d",&n,&mood);
	int i,j;
	double p[4]={0};
	for(i=0;i<4;i++){
		scanf("%lf",&p[i]);
	}
	double ans1;
	double ans2;
	if(mood==0){
		ans1=1;
		ans2=0;
	}
	else{
		ans1=0;
		ans2=1;
	}
	for(i=0;i<n;i++){
		double temp1=ans1*p[0]+ans2*p[2];
		double temp2=ans1*p[1]+ans2*p[3];
		ans1=temp1;
		ans2=temp2;
	}
	printf("%.0f\n%.0f",round(ans1*1000),round(ans2*1000));
}
