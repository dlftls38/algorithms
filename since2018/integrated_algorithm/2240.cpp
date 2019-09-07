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
using namespace std;
int a[3][1001][32];
int jadu[1001];
int main(){
	int t,w;
	scanf("%d%d",&t,&w);
	int i,j,k;
	for(i=1;i<=t;i++){
		scanf("%d",&jadu[i]);
	}
	int ans=0;
	for(i=1;i<=t;i++){
		for(j=1;j<=w+1;j++){
			if(jadu[i]==1){
				a[1][i][j]=max(a[1][i-1][j]+1,a[2][i-1][j-1]+1);
				a[2][i][j]=max(a[1][i-1][j-1],a[2][i-1][j]);
				ans=max(a[1][i][j],a[2][i][j]);
			}
			else{
				if(i==1 && j==1){
					continue;
				}
				a[1][i][j]=max(a[1][i-1][j],a[2][i-1][j-1]);
				a[2][i][j]=max(a[1][i-1][j-1]+1,a[2][i-1][j]+1);
				ans=max(a[1][i][j],a[2][i][j]);
			}
		}
	}
	printf("%d",ans);
}
