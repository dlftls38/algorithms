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
	int i,j,k,l;
	int a[30][30];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int ans=0;
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			for(k=j+1;k<m;k++){
				int temp=0;
				for(l=0;l<n;l++){
					temp+=max(max(a[l][i],a[l][j]),a[l][k]);
				}
				ans=max(ans,temp);
			}
		}
	}
	printf("%d",ans);
}
