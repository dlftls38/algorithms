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
	int n,f;
	scanf("%d%d",&n,&f);
	int i,j;
	int a[10][10]={0};
	for(i=0;i<10;i++){
		a[0][i]=i+1;
	}
	while(1){
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
				a[i+1][j]=a[i][j]+a[i][j+1];
			}
		}
		if(a[n-1][0]==f){
			for(i=0;i<n;i++){
				printf("%d ",a[0][i]);
			}
			return 0;
		}
		else{
			next_permutation(a[0],a[0]+n);
		}	
	}
}
