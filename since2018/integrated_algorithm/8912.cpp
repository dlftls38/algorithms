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
	scanf("%d",&t);
	int i,j,k;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a[1000];
		int ans=0;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(j){
				for(k=0;k<j;k++){
					if(a[k]<=a[j])ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
}
