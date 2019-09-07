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
	int t;
	int i,j;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		int n,l;
		scanf("%d%d",&n,&l);
		int a[22]={0};
		for(j=1;j<=n;j++){
			scanf("%d",&a[j]);
		}
		sort(a+1,a+n+1);
		a[n+1]=10000000;
		for(j=1;j<=n+1;j++){
			a[j]+=a[j-1];
		}
		int sum=0;
		for(j=1;j<=n+1;j++){
			if(a[j]>l){
				printf("Case %d: %d %d %d\n",i,j-1,a[j-1],sum);
				break;
			}
			else{
				sum+=a[j];
			}
		}
	}
}
