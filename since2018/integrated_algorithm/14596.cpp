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
	int h,w;
	scanf("%d%d",&h,&w);
	int b1[100][100];
	int b2[100][100];
	int ans[100][100];
	int i,j;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			scanf("%d",&b1[i][j]);
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			scanf("%d",&b2[i][j]);
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			if(i==0)ans[i][j]=(b1[i][j]-b2[i][j])*(b1[i][j]-b2[i][j]);
			else ans[i][j]=INF;
		}
	}
	for(i=0;i<h-1;i++){
		for(j=0;j<w;j++){
			if(i+1<h && j+1<w && ans[i+1][j+1]>ans[i][j]+(b1[i+1][j+1]-b2[i+1][j+1])*(b1[i+1][j+1]-b2[i+1][j+1])){
				ans[i+1][j+1]=ans[i][j]+(b1[i+1][j+1]-b2[i+1][j+1])*(b1[i+1][j+1]-b2[i+1][j+1]);
			}
			if(i+1<h && j-1>=0 && ans[i+1][j-1]>ans[i][j]+(b1[i+1][j-1]-b2[i+1][j-1])*(b1[i+1][j-1]-b2[i+1][j-1])){
				ans[i+1][j-1]=ans[i][j]+(b1[i+1][j-1]-b2[i+1][j-1])*(b1[i+1][j-1]-b2[i+1][j-1]);
			}
			if(i+1<h && ans[i+1][j]>ans[i][j]+(b1[i+1][j]-b2[i+1][j])*(b1[i+1][j]-b2[i+1][j])){
				ans[i+1][j]=ans[i][j]+(b1[i+1][j]-b2[i+1][j])*(b1[i+1][j]-b2[i+1][j]);
			}
		}
	}
	int res=INF;
	for(i=0;i<w;i++){
		res=min(res,ans[h-1][i]);
	}
	printf("%d",res);
}
