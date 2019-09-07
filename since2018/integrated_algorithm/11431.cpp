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
using namespace std;
typedef pair<int,int> pii;
int main(){
	int k;
	scanf("%d",&k);
	int i,j;
	for(i=1;i<=k;i++){
		int n,s,p;
		scanf("%d%d%d",&n,&s,&p);
		int x[1000];
		int y[1000];
		int cnt=0;
		for(j=0;j<n+1;j++){
			scanf("%d%d",&x[j],&y[j]);
			if(j>0){
				cnt+=abs(x[j]-x[j-1])+abs(y[j]-y[j-1]);
			}
		}
		printf("Data Set %d:\n%d\n\n",i,(int)(ceil((double)cnt*s/p)));
	}
}
