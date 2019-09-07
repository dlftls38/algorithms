#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n,f;
	scanf("%d%d",&n,&f);
	double q[4]={0};
	int i;
	for(i=0;i<4;i++){
		scanf("%lf",&q[i]);
		q[i]*=10;
	}
	double a[2][110]={0};
	if(f==0){
		a[0][0]=1;
	}
	else{
		a[1][0]=1;
	}
	for(i=0;i<n;i++){
		a[0][i+1]+=a[0][i]*q[0];
		a[1][i+1]+=a[0][i]*q[1];
		a[0][i+1]+=a[1][i]*q[2];
		a[1][i+1]+=a[1][i]*q[3];
	}
	for(i=0;i<n;i++){
		a[0][n]/=10;
		a[1][n]/=10;
	}
	
	a[0][n]*=1000;
	a[1][n]*=1000;
	printf("%.0lf %.0lf\n",a[0][n],a[1][n]);
}
