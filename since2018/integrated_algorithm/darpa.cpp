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
	int c;
	scanf("%d",&c);
	while(c--){
		int n,m;
		scanf("%d%d",&n,&m);
		int i,j;
		double a[200]={0};
		for(i=0;i<m;i++){
			scanf("%lf",&a[i]);
		}
		double l=0;
		double r=240;
		double mid;
		double ans;
		while(r-l>1e-4){
			mid=(l+r)/2;
			int count=1;
			double cur=a[0];
			for(i=1;i<m;i++){
				if(a[i]-cur>=mid){
					count++;
					cur=a[i];
				}
			}
			if(count>=n){
				l=mid;
				ans=mid;
			}
			else{
				r=mid;
			}
		}
		printf("%.2f\n",ans);
	}
}
