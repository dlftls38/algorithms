#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <limits.h>
#include <functional>
using namespace std;
int a[1002][1002];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=1000;i++){
		for(j=1;j<=i;j++){
			a[i-j+1][j]=i;
		}
	}
	int m=0;
	for(i=1;i<1000;i++){
		if(2*i-1>=n){
			m=i;
			break;
		}
	}
	printf("%d\n",m);
	int count=1;
	int y=1,x=1;
	printf("1 1\n");
	while(count<n){
		x++;
		printf("%d %d\n",y,x);
		count++;
		if(count==n){
			break;
		}
		y++;
		printf("%d %d\n",y,x);
		count++;
		if(count==n){
			break;
		}
	}
//	for(i=1;i<=m;i++){
//		if(a[1][i]<=n)
//			printf("%d %d\n",1,i);
//	}
//	for(i=2;i<=m;i++){
//		if(a[i][m]<=n)
//			printf("%d %d\n",i,m);
//	}
}
