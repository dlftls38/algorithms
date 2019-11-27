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
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
pii dir[] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1} };
int main(){
	int k;
	cin>>k;
	double c[11];
	int i,j;
	for(i=k;i>=0;i--){
		cin>>c[i];
	}
	double a,b,n;
	cin>>a>>b>>n;
	double fx=0;
	double aa=a;
	double bb=b;
	for(i=0;i<=k;i++){
		fx+=c[i]*(bb-aa)/(i+1);
		aa*=a;
		bb*=b;
	}
	double l=0;
	double dx=1.0*(b-a)/n;
	double r=dx;
	while(r-l>0.00000001){
		double mid=(l+r)/2;
		double temp=0;
		for(i=0;i<n;i++){
			double x=1;
			for(j=0;j<=k;j++){
				temp+=x*c[j]*dx;
				x*=1.0*(a+i*dx+mid);
			}
		}
		if(fx>temp){
			l=mid;
		}
		else{
			r=mid;
		}
	}
	printf("%f",l);
}
