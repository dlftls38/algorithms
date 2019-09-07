#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int a[301][301]={0};
	int b[301][301]={0};
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i+1][j+1]);
			a[i+1][j+1]+=a[i+1][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i+1][j+1]+=a[i][j+1];
		}
	}
	int k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int x[4]={0};
		for(j=0;j<4;j++){
			scanf("%d",&x[j]);
		}
		printf("%d\n",a[x[2]][x[3]]-a[x[2]][x[1]-1]-a[x[0]-1][x[3]]+a[x[0]-1][x[1]-1]);
	}
}
