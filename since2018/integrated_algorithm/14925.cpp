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
int a[1000][1000];
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	int ans=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>0){
				a[i][j]=0;
			}
			else{
				a[i][j]=1;
			}
			ans=max(ans,a[i][j]);
		}
	}
	for(i=1;i<m;i++){
		for(j=1;j<n;j++){
			if(a[i][j]==1){
				a[i][j]=min(min(a[i-1][j],a[i][j-1]),a[i-1][j-1])+1;	
			}
			ans=max(ans,a[i][j]);
		}
	}
	printf("%d",ans);
}
