#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int a[1001][1001]={0};
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j;
	for(i=0;i<1001;i++){
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=1;i<1000;i++){
		for(j=1;j<=i;j++){
			a[i+1][j]=a[i][j-1]+a[i][j];
			a[i+1][j]%=10007;
		}
	}
	printf("%d",a[n][k]);
}
