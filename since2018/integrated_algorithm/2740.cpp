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
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int a[100][100]={0};
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int k,l;
	scanf("%d%d",&m,&k);
	int b[100][100]={0};
	for(i=0;i<m;i++){
		for(j=0;j<k;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int c[100][100]={0};
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			for(l=0;l<m;l++){
				c[i][j]+=a[i][l]*b[l][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
