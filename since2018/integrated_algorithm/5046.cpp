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
	int n,b,h,w;
	scanf("%d%d%d%d",&n,&b,&h,&w);
	int i,j;
	int ans=INF;
	for(i=0;i<h;i++){
		int p;
		scanf("%d",&p);
		int a[13];
		for(j=0;j<w;j++){
			scanf("%d",&a[j]);
			if(a[j]>=n && b>=p*n){
				ans=min(ans,p*n);
			}
		}
	}
	if(ans==INF){
		printf("stay home");
	}
	else{
		printf("%d",ans);
	}
}
