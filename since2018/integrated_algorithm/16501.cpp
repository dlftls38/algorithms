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
int main(){
	int a[8];
	int i,j;
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	int round=1;
	for(i=2;i<=8;i++){
		round*=i;
	}
	double ans=0;
	for(i=0;i<round;i++){
		double temp=1;
		int l=0;
		int r=0;
		for(j=0;j<2;j++){
			l+=a[j];
		}
		for(j=2;j<4;j++){
			r+=a[j];
		}
		double l_avg = 1.0 * l/2;
		double r_avg = 1.0 * r/2;
		temp=min(temp,1-abs(l_avg-r_avg)/10);
		int l2=0;
		int r2=0;
		for(j=4;j<6;j++){
			l2+=a[j];
		}
		for(j=6;j<8;j++){
			r2+=a[j];
		}
		double l2_avg = 1.0 * l2/2;
		double r2_avg = 1.0 * r2/2;
		temp=min(temp,1-abs(l2_avg-r2_avg)/10);
		ans=max(ans,temp);
		next_permutation(a,a+8);
	}
	if((int)(ans*100)%10>0){
		printf("%.2f",ans);
	}
	else{
		printf("%.1f",ans);
	}
}
