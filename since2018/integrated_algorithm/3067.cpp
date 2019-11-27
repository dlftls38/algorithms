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
	while(t--){
		int n;
		scanf("%d",&n);
		int a[20];
		int i,j;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int m;
		scanf("%d",&m);
		int ans[20001]={0};
		ans[0]=1;
		for(i=0;i<n;i++){
			for(j=0;j+a[i]<=m;j++){
				ans[j+a[i]]+=ans[j];
			}
		}
		printf("%d\n",ans[m]);
	}
}
