#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<utility>
#include<set>
#include<queue>
#include<map>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<sstream>
#include<climits>
#include<sys/time.h>
using namespace std;
int main(){
	int i;
	int n;
	scanf("%d",&n);
	int divide[60];
	double cakes[60];
	for(i=0;i<n;i++){
		scanf("%lf",&cakes[i]);
		divide[i]=1;
	}
	int m;
	scanf("%d",&m);
	double ans=1e100;
	int pos;
	while(1){
	  	double max_val=-1e100;
	  	double min_val=1e100;
	    for(i=0;i<n;i++){
	    	if(cakes[i]/divide[i] > max_val ){
	      		max_val = cakes[i]/divide[i];
				pos=i;	
			}
	    	if(cakes[i]/divide[i] < min_val ){
	      		min_val = cakes[i]/divide[i];	
			}
	    }
	    if(max_val-min_val < ans){
	    	ans= max_val-min_val;	
		}
	    if(m==0){
	    	break;
		}
		m--;
	    divide[pos]++;
	}
	printf("%.11f",ans);
}
