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
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int i,j,l;
	int a[20][20]={0};
	for(i=1;i<20;i++){
		a[0][i]=i;
	}
	for(i=1;i<20;i++){
		for(j=1;j<20;j++){
			for(l=1;l<=j;l++){
				a[i][j]+=a[i-1][l];
			}
		}
	}
	while(t--){
		int n,k;
		scanf("%d%d",&k,&n);
		printf("%d\n",a[k][n]);
	}
}
