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
using namespace std;
typedef pair<int,int> pii;
int main(){
	long long n,m;
	int q;
	scanf("%lld%lld%d",&n,&m,&q);
	int i,j;
	for(i=0;i<q;i++){
		int sx,ex;
		long long sy,ey;
		scanf("%d%lld%d%lld",&sx,&sy,&ex,&ey);
		if(n==1){
			printf("YES\n");
			continue;
		}
		if(sx==1 && ex==1){
			if(1.0*sy/n!=1.0*ey/n){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else if(sx==1 && ex==2){
			if(1.0*sy/n!=1.0*ey/m){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else if(sx==2 && ex==1){
			if(1.0*sy/m!=1.0*ey/n){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else if(sx==2 && ex==2){
			if(1.0*sy/m!=1.0*ey/m){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
}
