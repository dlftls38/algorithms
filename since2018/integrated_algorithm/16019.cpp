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
#define INF 987654321
#define MAX_VALUE 1000000000
#define MOD 1000000009
#define pi 3.141592
using namespace std;
typedef pair<int,int> pii;
int main(){
	int a[4]={0};
	int q[5][5]={0};
	int i,j;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			q[i][j]+=a[j-1]+q[i][j-1];
		}
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			q[j][i]=q[i][j];
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",q[i][j]);
		}
		printf("\n");
	}
}
