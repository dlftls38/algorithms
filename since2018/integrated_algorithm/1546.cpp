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
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i;
	double a[1000]={0};
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	sort(a,a+n);
	reverse(a,a+n);
	double k=a[0];
	for(i=0;i<n;i++){
		a[i]=a[i]/k*100;
		if(i>0)
			a[0]+=a[i];
	}
	printf("%f",a[0]/n);
}
