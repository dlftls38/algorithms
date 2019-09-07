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
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	double p[4][4]={0};
	double ans[4]={25,25,25,25};
	for(i=0;i<m;i++){
		string from,to;
		cin>>from>>to;
		double pr;
		scanf("%lf",&pr);
		p[from[0]-65][to[0]-65]=pr;
	}
	for(i=0;i<n;i++){
		double temp[4]={0};
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				temp[k]+=ans[j]*p[j][k];
			}
		}
		for(j=0;j<4;j++){
			ans[j]=temp[j];
		}
	}
	for(i=0;i<4;i++){
		printf("%f\n",ans[i]);
	}
}
