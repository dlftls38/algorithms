#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[1000][3]={0};
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<n;i++){
		a[i][0]+=min(a[i-1][1],a[i-1][2]);
		a[i][1]+=min(a[i-1][0],a[i-1][2]);
		a[i][2]+=min(a[i-1][0],a[i-1][1]);
	}
	printf("%d",min(a[n-1][0],min(a[n-1][1],a[n-1][2])));
}
