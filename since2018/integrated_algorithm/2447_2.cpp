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
int a[6570][6570];
void dq(int count, int y, int x){
	if(count==3){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(!(i==1 && j==1)){
					a[y+i][x+j]=1;
				}
			}
		}
	}
	else if(count>1){
		count/=3;
		dq(count,y,x);
		dq(count,y,x+count);
		dq(count,y,x+count*2);
		dq(count,y+count,x);
		dq(count,y+count,x+count*2);
		dq(count,y+count*2,x);
		dq(count,y+count*2,x+count);
		dq(count,y+count*2,x+count*2);
	}
}
int main(){
	int n,k;
	scanf("%d",&n);
	dq(n,0,0);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
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
