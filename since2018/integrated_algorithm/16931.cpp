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
	int i,j;
	int a[104][104];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int ans=n*m*2;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]>a[i-1][j]){
				ans+=a[i][j]-a[i-1][j];
			}
		}
	}
	for(i=n;i>=1;i--){
		for(j=1;j<=m;j++){
			if(a[i][j]>a[i+1][j]){
				ans+=a[i][j]-a[i+1][j];
			}
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(a[j][i]>a[j][i-1]){
				ans+=a[j][i]-a[j][i-1];
			}
		}
	}
	for(i=m;i>=1;i--){
		for(j=1;j<=n;j++){
			if(a[j][i]>a[j][i+1]){
				ans+=a[j][i]-a[j][i+1];
			}
		}
	}
	printf("%d",ans);
}
