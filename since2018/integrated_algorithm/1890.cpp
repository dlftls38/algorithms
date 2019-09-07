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
	int a[130][130]={0};
	long long b[130][130]={0};
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	b[0][0]=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]!=0){
				b[i+a[i][j]][j]+=b[i][j];
				b[i][j+a[i][j]]+=b[i][j];
			}
		}
	}
	printf("%lld",b[n-1][n-1]);
}
