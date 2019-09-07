#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
using namespace std;
double a[100000];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	long long sum=0;
	vector<int>v;
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
		if(a[i]!=(int)a[i]){
			v.push_back(i);
			sum+=floor(a[i]);
		}
		else{
			sum+=(int)a[i];
		}
	}
	sum=-sum;
	int tail=0;
	for(i=0;i<n;i++){
		if(sum>0 && v[tail]==i){
			printf("%d\n",(int)ceil(a[i]));
			sum--;
			tail++;
		}
		else{
			printf("%d\n",(int)floor(a[i]));
		}
	}
}
