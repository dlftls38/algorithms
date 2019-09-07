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
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int pos[60000]={0};
	int vel[60000]={0};
	for(i=0;i<n;i++){
		scanf("%d",&pos[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&vel[i]);
	}
	double l=0;
	double r=pow(10,9);
	while(r-l>1e-7){
		double mid=(l+r)/2;
		double rmin=pow(10,9);
		double lmax=0;
		for(i=0;i<n;i++){
			lmax=max(lmax,pos[i]-mid*vel[i]);
			rmin=min(rmin,pos[i]+mid*vel[i]);
		}
		//printf("%.10lf %.10lf\n",lmax,rmin);
		if(lmax>=rmin){
			l=mid;
		}
		else{
			r=mid;
		}
	}
	printf("%.10lf",r);
}
