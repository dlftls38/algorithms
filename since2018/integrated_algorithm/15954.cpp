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
int a[500]={0};
double avg(int s,int e){
	double sum=0;
	for(int i=s;i<=e;i++){
		sum+=a[i];
	}
	return sum/(e-s+1);
}
double avg_gap(int s,int e,double m){
	double sum=0;
	for(int i=s;i<=e;i++){
		sum+=pow(a[i]-m,2);
	}
	return sqrt(sum/(e-s+1));
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	double ans=INT_MAX;
	for(i=0;i<n;i++){
		for(j=k-1;i+j<n;j++){
			ans=min(ans,avg_gap(i,i+j,avg(i,i+j)));
		}
	}
	printf("%.11f",ans);
}
