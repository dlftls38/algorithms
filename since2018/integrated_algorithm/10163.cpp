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
	int n;
	scanf("%d",&n);
	int a[101][101]={0};
	int ans[100]={0};
	int i,j,k;
	for(i=1;i<=n;i++){
		int x,y,w,h;
		scanf("%d%d%d%d",&x,&y,&w,&h);
		for(j=y;j<y+h;j++){
			for(k=x;k<x+w;k++){
				a[j][k]=i;
			}
		}
	}
	for(i=0;i<101;i++){
		for(j=0;j<101;j++){
			ans[a[i][j]]++;
		}
	}
	for(i=1;i<=n;i++){
		printf("%d\n",ans[i]);
	}
}
