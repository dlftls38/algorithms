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
long long a[1001][1001];
int main(){
	int i,j;
	for(i=1;i<=1000;i++){
		a[i][0]=1;
		a[i][i]=1;
		a[i][1]=i;
		a[i][i-1]=i;
	}
	for(i=4;i<=1000;i++){
		for(j=2;j*2<=i;j++){
			a[i][j]=a[i-1][j]+a[i-1][j-1];
			a[i][i-j]=a[i][j];
		}
	}
	for(i=100;i<=100;i++){
		for(j=0;j<=i;j++){
			printf("nCr = %d %d == %lld\n",i,j,a[i][j]);
		}
		printf("\n");
	}
}
