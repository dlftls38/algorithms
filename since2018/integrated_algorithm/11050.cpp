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
int a[1001][1001];
int bino(int n,int r){
	if(a[n][r]!=0){
		return a[n][r];
	}
	if(n==r || r==0){
		return 1;
	}
	a[n-1][r]=bino(n-1,r);
	a[n-1][r-1]=bino(n-1,r-1);
	return a[n-1][r]+a[n-1][r-1];
}
int main(){
	int n,r;
	scanf("%d%d",&n,&r);
	printf("%d",bino(n,r));
}
