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
	int t;
	scanf("%d",&t);
	int i,j,k;
	for(i=1;i<=t;i++){
		long long n,m;
		scanf("%lld%lld",&n,&m);
		long long nn=abs(n),mm=abs(m);
		if(nn>mm)swap(nn,mm);
		printf("Scenario #%d:\n",i);
		if(n>=0 && m>=0){
			printf("%lld\n\n",mm*(mm+1)/2-nn*(nn-1)/2);
		}
		else if(n<=0 && m>=0){
			if(abs(n)>m){
				printf("%lld\n\n",-(mm*(mm+1)/2-nn*(nn+1)/2));
			}
			else{
				printf("%lld\n\n",mm*(mm+1)/2-nn*(nn+1)/2);
			}
		}
		else if(n<=0 && m<=0){
			printf("%lld\n\n",-(mm*(mm+1)/2-nn*(nn-1)/2));
		}
	}
}
