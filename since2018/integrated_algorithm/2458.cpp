#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
#include <math.h>
#include <fstream>
#define INF 987654321
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j,k;
	int a[501][501]={0};
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			a[i][j]=INF;
		}
	}
	for(i=0;i<m;i++){
		int q,w;
		scanf("%d%d",&q,&w);
		a[q][w]=1;
	}
	for(k=1;k<=n;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(a[i][j]>a[i][k]+a[k][j]){
					a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
	}
	int ans=0;
	int check[501]={0};
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(a[i][j]!=INF){
				check[i]++;
				check[j]++;
				if(check[i]==n-1){
					ans++;
				}
				if(check[j]==n-1){
					ans++;
				}
			}
		}
	}
	printf("%d",ans);
}
