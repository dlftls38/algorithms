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
int a[3080][6160];
void dq(int count, int y, int x){
	if(count==3){
		a[y][x]=1;
		a[y+1][x-1]=1;
		a[y+1][x+1]=1;
		for(int i=0;i<5;i++){
			a[y+2][x-2+i]=1;
		}
	}
	else if(count>1){
		dq(count/2,y+count/2,x+count/2);
		dq(count/2,y+count/2,x-count/2);
		dq(count/2,y,x);
	}
}
int main(){
	int n,k;
	scanf("%d",&n);
	dq(n,0,n-1);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<2*n-1;j++){
			if(a[i][j]==1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
